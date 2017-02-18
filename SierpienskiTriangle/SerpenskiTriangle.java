import javafx.application.Application;
import javafx.geometry.Point2D;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Polygon;
import javafx.stage.Stage;

public class SerpenskiTriangle extends Application{
//Creates a new gridpane which will be used to display the triangle
   public GridPane pane = new GridPane();
   @Override
   public void start(Stage primaryStage){
    //Creates a triangle out of 2D points
      Point2D p1 = new Point2D(pane.getHeight() / 20, 100);
      Point2D p2 = new Point2D(100, pane.getWidth() - 100);
      Point2D p3 = new Point2D(pane.getHeight() - 100, pane.getWidth() - 100);  
    
    /*Calls the orderTriangle method using the points we made to build the triangle and 
    the number of times we want to order it. I was going to add a way for the method to 
    read input from a text box but every time I tried to implement it I would get a huge string
    of errors. For now just change the order int manually*/
      int order = 1;
      orderTriangle(order, p1, p2, p3);
   //Sets up the stage to be displayed by javafx
      Scene scene = new Scene(pane, 500, 500);
      primaryStage.setTitle("Triangles");
      primaryStage.setScene(scene);
      primaryStage.show();
      
   }
 
 //Method that would order the triangle if it were working correctly
   public void orderTriangle(int order, Point2D p1,
      Point2D p2, Point2D p3) 
   {
      if (order == 0) {
         Polygon triangle = new Polygon();
         // Draw a triangle to connect three points
         triangle.getPoints().addAll(p1.getX(), p1.getY(), p2.getX(),
               p2.getY(), p3.getX(), p3.getY());
         triangle.setStroke(Color.BLACK);
         triangle.setFill(Color.BLACK);
         pane.getChildren().add(triangle);
      }
      else {
         // Get the midpoint on each edge in the triangle
         Point2D p12 = p1.midpoint(p2);
         Point2D p23 = p2.midpoint(p3);
         Point2D p31 = p3.midpoint(p1);
         // Recursively display three triangles
         orderTriangle(order - 1, p1, p12, p31);
         orderTriangle(order - 1, p12, p2, p23);
         orderTriangle(order - 1, p31, p23, p3); }     
   }
   
 //Launches JavaFX
   public static void main(String[] args){
      Application.launch(args);
   }
}