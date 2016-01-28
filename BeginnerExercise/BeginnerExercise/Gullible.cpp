#include "Gullible.h"
#include <iostream>


Gullible::Gullible()
{
    auto value = 0;
    auto input = 0;
    while(true)
    {
        std::cout << "Enter a number other than " << ++value << std::endl;

        std::cin >> input;

        if (input == value)
        {
            std::cout << "Hey! You weren't supposed to enter " << value << "!" << std::endl;
            break;
        }

        if (value == 10)
        {
            std::cout << "Wow, you're more patient then I am, you win." << std::endl;
            break;
        }
    }
    system("pause");

}


Gullible::~Gullible()
{
}
