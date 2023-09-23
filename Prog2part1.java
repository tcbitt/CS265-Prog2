/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple Java program that gets user input for grades and total possible points until
the user inputs -1. Displays various metrics including letter grade and average. 

*/
import java.util.Scanner;
import java.text.DecimalFormat;

public class Prog2part1 {
	public static void main(String[] args) {
		//Variables
    int currentGrade = 0, possibleGrade = 0, totalGrades = 0,
		    totalPoints = 0, totalPossible = 0, perfectScores = 0;
		float average = 0;
		char letterGrade;

    //Objects
		Scanner sc = new Scanner(System.in);
		DecimalFormat decFormat = new DecimalFormat("#0.000");

    //Initiate infinite loop
		while(true) {
		  System.out.print("Enter a score: ");
		  currentGrade = sc.nextInt();

      //If the user inputs -1, break from the loop
		  if(currentGrade == -1)
		    break;
		 
		  totalGrades++; 
		  totalPoints += currentGrade;
		
		  System.out.print("Enter the possible score: ");
		  possibleGrade = sc.nextInt();
		
		  totalPossible += possibleGrade;

      //If they received the max points, add one to perfect scores
		  if (currentGrade == possibleGrade)
		    perfectScores++;
		
		  }
		//Calculate average as a float to get precise decimal
	  average =  (float) totalPoints/totalPossible * 100;
		
	    if(average < 60)
	        letterGrade = 'F';
	    else if (average < 70)
	        letterGrade = 'D';
	    else if (average < 80)
	        letterGrade = 'C';
	    else if (average < 90)
	        letterGrade = 'B';
	    else
	        letterGrade = 'A';

	  System.out.println("Number of Scores: " + totalGrades);
		System.out.println("Total points: " + totalPoints);
		System.out.println("Total possible: " + totalPossible);
		System.out.println("Average: " + decFormat.format(average));
		System.out.println("Grade: " + letterGrade);
		System.out.println("Perfect scores: " + perfectScores);
	}
}
