/*12/3/15*/


import java.util.Stack;
import java.util.Scanner;
import java.io.*;
public class Operands
{
   public static void main(String args[]) throws FileNotFoundException
   {
      if (args.length != 1) {
         System.out.println("Not a valid filename");
         System.exit(0);
      }
        
      boolean isLegal = true;
    //Creates a new file object which will be added to the stack. Edit it as you please
      File file = new File(args[0]);
      
      if (!file.isFile()) {
         System.out.println(args[0] + " is not a file.");
         System.exit(0);
      }    
      
      Scanner scan = new Scanner(file);
      
      String iString = scan.next();
    //Adds each character into a string which will be added to an array for comparison later
      while(scan.hasNext())
      {
         iString = iString + scan.next();
      }
      
    //Initializes a char array and turns the previous string into a char array  
      char[] charArray = iString.toCharArray();
      
    //Compares all elements in the array, making sure each indentation is balanced  
      for(int i = 0; i < charArray.length; i = i+2)
      {
         if((charArray[i] == '[') && (charArray[i+1] == ']'))
         {
            isLegal = true;
         }
         else if((charArray[i] == '{') && (charArray[i+1] == '}'))
         {
            isLegal = true;
         }
         else if((charArray[i] == '(') && (charArray[i+1] == ')'))
         {
            isLegal = true;
         }
         else 
            isLegal = false;
      }
   //If the operands are balanced it is returned as a legal operation. Otherwise is is not.   
      if(isLegal)
         System.out.println("The operation is legal");
      else
         System.out.println("The operation is not legal");
      
   }
}