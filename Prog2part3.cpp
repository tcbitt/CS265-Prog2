/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that gets a starting and ending value from the user.
Checks if the start value is larger or smaller than the end value.
Counts up or down if start is smaller or larger, respectively.
Uses for loops to output each value as it iterates.
*/
#include <iostream>

int main(){
    int start = 0, end = 0;
    
    std::cout << "Enter starting value: ";
    std::cin >> start;
    
    std::cout << "Enter ending value: ";
    std::cin >> end;

    //Check if start less than end, if so count up
    if(start < end) {
        for(start; start <= end; ++start) {
            std::cout << start << std::endl;
        }
    }
    
    //Else start must be larger than end, so we count down.
    else {
        for(start; start >= end; --start) {
            std::cout << start << std::endl;
        }
    }    
}
