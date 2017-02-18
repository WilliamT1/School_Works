
import java.net.*;
import java.io.*;
import java.util.Scanner;
public class Exercise12_19
{

   public static void main(String[] args) throws IOException
   {
   //Initializes an int variable that will be used to count the words on the page
      int count = 0;
   //Creates a URL object with the url provided
      java.net.URL speech = new java.net.URL("http://cs.armstrong.edu/liang/data/Lincoln.txt");
   //Initializes scanner cin which will read the text from the URL provided earlier
      Scanner cin = new Scanner(speech.openStream());
      
      String input;
   //While loop that executes as long as there is text to read from the url
      while(cin.hasNext())
      {
         input = cin.nextLine();
         for(int i = 0; i < input.length(); i++)
         {
            if(input.charAt(i) == ' ')
            {
               count++;
            }
         }
      }
    //Closes the scanner
      cin.close();
    //Prints the amount of words on the webpage
      System.out.println(count);
   }
}
