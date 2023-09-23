/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that gets user input for width, height, and a symbol.
Uses 2 nested for loops to generate symbol pattern using user input.
*/  
#include <iostream>

int main(){
    int width, height;
    char symbol;
    
    std::cout << "Please enter a width: ";
    std::cin >> width;
    
    std::cout << "Please enter a height:";
    std::cin >> height;
    
    std::cout << "Please enter a symbol: ";
    std::cin >> symbol;
    
    
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < width; j++)
            std::cout << symbol;
            
        std::cout << std::endl;
    }
}
