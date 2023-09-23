/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple Java program that takes to integer values from the user, a start and end.
Then iterates up or down depeneding on if start is > or < end, displaying each value
as it iterates.
*/
import java.util.Scanner;

public class Prog2part3 {
	public static void main(String[] args) {
	    //Variables
      int start = 0, end = 0;

      //Objects
	    Scanner sc = new Scanner(System.in);
	    
	    System.out.print("Enter starting value: ");
	    start = sc.nextInt();
	    
	    System.out.print("Enter ending value: ");
	    end = sc.nextInt();
	    
	    if(start < end){
	        for(; start <= end; start++ ){
	            System.out.println(start);
	        }
	    }
	    else {
	        for(; start >= end; start--){
	            System.out.println(start);
	        }
	    }
	    
	}
}
