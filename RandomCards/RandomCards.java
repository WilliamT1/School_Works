//Prints out a series of random cards
//10-24-15
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import java.util.Random;

public class RandomCards extends Application{
   @Override
   public void start(Stage primaryStage){
      GridPane pane = new GridPane();
      pane.setHgap(5);
      pane.setVgap(5);
     
      ImageView[] cards = {randomImage(), randomImage(), randomImage()};
         
      pane.add(cards[0], 0, 0);
      pane.add(cards[1], 1, 0);
      pane.add(cards[2], 2, 0);
         
      Scene scene = new Scene(pane, 500, 250);
      primaryStage.setTitle("Cards");
      primaryStage.setScene(scene);
      primaryStage.show();   
   
   }
   
   public ImageView randomImage(){
   
      Random rand = new Random();
      int random = rand.nextInt(12);
      int randomType = rand.nextInt(3);
      String[] value = {"2","3","4","5","6","7","8","9", "a","j","k","q","t"};
      String[] typeOfCard = {"c","h","d","s"};
      Image image = new Image("http://www.cs.duke.edu/csed/ap/cards/images/"+value[random]+typeOfCard[randomType]+".gif");
      ImageView imageView = new ImageView(image);
   
      return imageView;
   }


   public static void main(String[] args){
      Application.launch(args);
   }
}