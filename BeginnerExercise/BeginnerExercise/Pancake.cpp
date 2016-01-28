#include "Pancake.h"
#include <ostream>
#include <iostream>

inline void Pancake::swap(int &a, int &b)
{
    auto c = a;
    a = b;
    b = c;
}

Pancake::Pancake()
{

    // Input 
    for (auto i = 0; i < sizeof(people) / sizeof(*people); i++)
    {
        std::cout << "How many pancakes did person no." << i + 1 << " eat?" << std::endl;
        std::cin >> people[i];
        std::cout << std::endl;

        peopleNames[i] = i + 1;
    }

    // Sort 
    for (auto outer = 0; outer < sizeof(people) / sizeof(*people); outer++)
    {
        for (auto inner = 0; inner < sizeof(people) / sizeof(*people) - 1; inner++)
        {
            if (people[inner + 1] < people[inner])
            {
                swap(people[inner], people[inner + 1]);
                swap(peopleNames[inner], peopleNames[inner + 1]);
            }
        }
    }

    // Output
    std::cout << "Person no." << peopleNames[0] << " ate the fewest pancakes with: " << people[0] << std::endl << std::endl;

    for (auto i = 0; i < sizeof(people) / sizeof(*people); i++)
    {
        std::cout << peopleNames[i] << ": ate " << people[i] << " pancakes." << std::endl;
    }
    system("pause");
}


Pancake::~Pancake()
{
}
