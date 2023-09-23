/*
Name: Travis Bittner
Email: travis.bittner@und.edu

C++ Program that gets user input as student grades and calculates average, letter grade, and other metrics. 
Utilizes std::vector as dynamic arrays to allow user to add grades continuously.
Utilizes std::accumulate to quick-sum the vectors for total pts and possible pts.
Contain a little bit of input validation as well just because.
*/
#include <iostream>
#include <vector> 
#include <numeric>
#include <iomanip>

int main()
{   float average = 0;
    int currentGrade = 0, maxGrade = 0, perfectScores = 0;
    std::vector<int> grades, possibleGrades;

    //Initialize infinite loop to gather user input 
    while(1){
    std::cout << "Enter a score: ";
    std::cin >> currentGrade;

    //When user input is -1, break from infinite loop
    if(currentGrade == -1)
        break;

    //Little input validation   
    while(!std::cin || currentGrade < 0){
        std::cin.clear();
        std::cin.ignore();
       
        std::cout << "Please enter a positive integer: ";
        std::cin >> currentGrade;
    }

    //Push the current grade if it is valid
    grades.push_back(currentGrade);
    
    std::cout << "Enter the possible score: ";
    std::cin >> maxGrade;

    //A little more input validation
    while(!std::cin || maxGrade < 0 || maxGrade < currentGrade){
        std::cin.clear();
        std::cin.ignore();
       
        std::cout << "Please enter a positive integer: ";
        std::cin >> maxGrade;
    }

    //Push possible grade in its own vector if it is > 0 && > currentGrade
    possibleGrades.push_back(maxGrade);    

    //If they are equal, add 1 to perfectScores  
    if (currentGrade == maxGrade)
        perfectScores++;
    }

    //Calculate average by casting the integer sums as floats for precise division (total pts/possible pts)
    average = (static_cast<float>(std::accumulate(grades.begin(), grades.end(), 0)) 
            / static_cast<float>(std::accumulate(possibleGrades.begin(), possibleGrades.end(), 0))) 
          //Multiply by 100 to get the average out of 100%
          * 100;
    
    std::cout << "\nNumber of scores: " << grades.size() << std::endl;
    std::cout << "Total points: " << std::accumulate(grades.begin(), grades.end(), 0) << std::endl; 
    std::cout << "Total possible: " <<  std::accumulate(possibleGrades.begin(), possibleGrades.end(), 0) << std::endl; 
    std::cout << "Average: " << std::setprecision(3) << std::fixed << average
                 << std::endl;    
    std::cout << "Grade: ";

    //If-else statements to determine letter grade using the average
    if(average < 60)
        std::cout << "F" << std::endl;
    else if (average < 70)
        std::cout << "D" << std::endl;
    else if (average < 80)
        std::cout << "C" << std::endl;
    else if (average < 90)
        std::cout << "B" << std::endl;
    else
        std::cout << "A" << std::endl;
    
    std::cout << "Perfect scores: " << perfectScores;

}
