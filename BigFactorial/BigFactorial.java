//11/07/15


import java.math.BigInteger;
import java.util.Scanner;

public class BigFactorial
{
   public static void main(String[] args)
   {
   //Creates a new scanner which will read input
      Scanner scan = new Scanner(System.in);
      System.out.print("Please enter an integer you would like to factorize: ");
      BigInteger input = scan.nextBigInteger();
   //Sends the input to the factorial method and prints the output
      System.out.println("\nThe factor of " + input + " is: " + factorial(input)); 
   }
   
  
  //Method that factorizes a biginteger 
   public static BigInteger factorial(BigInteger n)
   {
      if(n.compareTo(BigInteger.ONE) < 0)
         return BigInteger.ONE;
      else
         return n.multiply(factorial(n.subtract(BigInteger.ONE)));
   }
}