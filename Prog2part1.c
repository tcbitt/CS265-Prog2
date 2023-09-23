/*
Name: Travis Bittner
Email: travis.bittner@und.edu

C Program that gets user input for current grades and total points for that grade
until the user enters -1. 

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int currentGrade = 0, possibleGrade = 0, totalGrades = 0, 
        perfectScores = 0, totalPoints = 0, totalPossible = 0;
    
    float average = 0;
    char letterGrade;

    //Initiate infinite loop
    while(1){
    
    printf("Enter a score: ");
    scanf("%d", &currentGrade);

    //If user input == -1 , break the loop and display metrics
    if(currentGrade == -1)
        break;

    //For each input grade add one, sum the current grades for total points earned
    totalGrades += 1;
    totalPoints += currentGrade;
    
    printf("Enter the possible score: ");
    scanf("%d", &possibleGrade);

    //Sum the total possible for calculating the average  
    totalPossible += possibleGrade;    

    //If the current grade == possible points, add one to perfect scores.  
    if(currentGrade == possibleGrade)
        perfectScores += 1;
    }

    //Calculate average as a float and multiply by 100 to get average out of 100  
    average = (float) totalPoints/totalPossible * 100;

    //Determine the letter grade for display
    if(average < 60) {
        letterGrade = 'F';
    }
    else if (average < 70) {
        letterGrade = 'D';
    }
    else if (average < 80) {
        letterGrade = 'C';
    }
    else if (average < 90) {
        letterGrade = 'B';
    }
    else {
        letterGrade = 'A'; 
    }
    
    printf("Number of grades: %d", totalGrades);
    printf("\nTotal points: %d", totalPoints);
    printf("\nTotal possible: %d", totalPossible);
    printf("\nAverage %.3f", average);
    printf("\nGrade: %c", letterGrade);
    printf("\nPerfect scores: %d", perfectScores);
    
}
