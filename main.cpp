#include <iostream>
#include <map>
#include <string>

void fizzBuzzSimple();
void fizzBuzzMap(unsigned maxNum);

int main () 
{
    // fizzBuzzSimple();
    fizzBuzzMap(20);
}

void fizzBuzzSimple()
{
    bool isFizzBuzz{false};

    for (size_t i{1}; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
           std::cout << "fizz";
           isFizzBuzz = true;
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
            isFizzBuzz = true;
        }   
        if (isFizzBuzz == false)
        {
            std::cout << i << std::endl;
        }
        else
            std::cout << std::endl;
            isFizzBuzz = false;
    } 
}

void fizzBuzzMap(unsigned maxNum)
{
    std::map <unsigned, std::string> fizzBuzzMap{{3, "fizz"}, {5, "buzz"}};
    bool foundFizzBuzz{ false };

    for (size_t i{1}; i <= maxNum; i++)
    {
        for (auto it : fizzBuzzMap)
        {
            if (i % it.first == 0)
            {
                std::cout << it.second;
                foundFizzBuzz = true;
            }
            
        }
        if (foundFizzBuzz == false)
        {
            std::cout << i;
        }

        foundFizzBuzz = false;
        std::cout << "\n";
    }
}