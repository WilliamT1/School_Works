import java.io.IOException;
import java.io.PrintWriter;
import java.io.File;
import java.util.Scanner;
public class FileMaker
{
   public static void main(String[] args) throws IOException
   {
   //Initializes a scanner that will be used to read input
      Scanner input = new Scanner(System.in);
      System.out.print("Please input a directory: ");
      String directory = input.next();
   //Initializes a file object from the string input by the user
      File tempFile = new File(directory);
   //If statement that makes a file using the mkdirs() method and executes based on whether or not a file
   //with that name in that directory already exists
      if(tempFile.mkdirs())
      {
         System.out.println("File created");   
      }
      else
      {
         System.out.println("That file already exists");
    //System closes if the file is  not created to prevent the system from executing infinitely
         System.exit(1);
      }
          
   }
}