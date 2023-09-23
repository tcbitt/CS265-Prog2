/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that gets user input for width, height, and a symbol.
Uses 2 nested while loops to generate symbol pattern using user input.
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
    
    while(height > 0){
        int i = width;
        while(i > 0){
            std::cout << symbol;
            --i;
        }
        std::cout<<std::endl;
        --height;
        
    }

    //For-loop version
    /*for(int i = 0; i < height ; i++){
        for(int j = 0; j < width; j++)
            std::cout << symbol;
            
        std::cout << std::endl;
    }*/
}
