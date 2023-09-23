/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C program that get user input for width, height, and a symbol to fill with.
Uses nested while loops to print a box of size width x height and fill it with the symbol.
*/  
#include <stdio.h>

int main(){
    int width = 0, height = 0;
    char symbol;
    
    printf("Enter width: ");
    scanf("%d", &width);
    
    printf("Enter height: ");
    scanf("%d", &height);
    
    printf("Enter symbol: ");
    
    //Clear input buffer to get character
    while(getchar() != '\n');
    symbol = getchar();
    
    while(height > 0) {
        //Set this because we need use the original width as we iterate
        int i = width;
        
        while(i > 0) {
            printf("%c", symbol);
            i -= 1;
        }
        printf("\n");
        height -= 1;
        
    }
}
