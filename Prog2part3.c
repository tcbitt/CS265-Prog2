/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C program, gets start and end values from user and counts up or down
displaying each number it iterates through.

*/
#include <stdio.h>

int main(){
    int start = 0, end = 0;
    
    printf("Enter starting value: ");
    scanf("%d", &start);
    
    printf("Enter ending value: ");
    scanf("%d", &end);

    //If the start value is less than the end value, count up at display each number
    if(start < end){
        for(start; start <= end; start +=1){
            printf("%d\n", start);
        }
    }
    //Else start must be greater than end, so we count down and display each number 
    else {
        for(start; start >= end; start -= 1){
            printf("%d\n", start);
        }
    }
}
