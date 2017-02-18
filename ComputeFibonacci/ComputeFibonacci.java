/*11/07/15*/

import java.util.Scanner;
public class ComputeFibonacci {
/** Main method */
   public static void main(String[] args) {
   // Create a Scanner
      Scanner input = new Scanner(System.in);
      System.out.print("Enter an index for a Fibonacci number: ");
      int index = input.nextInt();
   
   // Find and display the Fibonacci number
      System.out.println("The Fibonacci number at index " + index + " is " + fib(index));
   }

 /** The method for finding the Fibonacci number */
   public static long fib(long index) {
      long f0 = 0; 
      long f1 = 1; 
      long currentFib = 0;
      for (int i = 2; i <= index; i++) {
         currentFib = f0 + f1;
         f0 = f1;
         f1 = currentFib;
      }
     return currentFib;  
   }
}
