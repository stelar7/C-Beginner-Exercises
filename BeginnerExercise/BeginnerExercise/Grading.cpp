#include "Grading.h"
#include <iostream>


Grading::Grading()
{
    std::cout << "Enter your score: (0-100)" << std::endl;

    int value;
    std::cin >> value;
    
    std::cout << "You scored: " << getGrade(value) << std::endl;
    system("pause");
}


Grading::~Grading()
{
}

char Grading::getGrade(int value)
{
    if (value > 90) return 'A';
    if (value > 80) return 'B';
    if (value > 70) return 'C';
    if (value > 60) return 'D';
    return 'F';
}
