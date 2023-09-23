/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple Java program that asks the user for a width, height, and fill character.
Uses two nested while loops to display the width x height box made up of the fill
character.
*/
import java.util.Scanner;

public class Prog2part2 {
	public static void main(String[] args) {
	    //Variables
	    int width = 0, height = 0;
	    char symbol;
		
	    //Objects
	    Scanner sc = new Scanner(System.in);

	    //Get user input
	    System.out.print("Enter width: ");
	    width = sc.nextInt();
	    
	    System.out.print("Enter height: ");
	    height = sc.nextInt();
	    
	    System.out.print("Enter character: ");
	    symbol = sc.next().charAt(0);
	    
	    while(height > 0){
	      //Set this variable because we need to keep the orig val of width  
              int i = width;
	        
	      while(i > 0){
	          System.out.print(symbol);
	          i--;
	      }
	      System.out.println();
	      height--;
      }
  }
}
	
