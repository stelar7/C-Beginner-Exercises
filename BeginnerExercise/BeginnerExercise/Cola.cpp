#include "Cola.h"
#include <iostream>


Cola::Cola()
{
    
    std::cout << "Select a beverage with the corresponding number" << std::endl;

    for (auto a = 0; a < beverages.size();a++)
    {
        std::cout << "(" << a << ")" << beverages.at(a) << std::endl;
    }

    int value;
    std::cin >> value;

    if (value > beverages.size() || value < 0)
    {
        std::cout << "Error. Choice was not valid, here is your money back" << std::endl;
    }

    std::cout << "You selected: " << beverages.at(value) << std::endl;
    system("pause");
}


Cola::~Cola()
{
}
