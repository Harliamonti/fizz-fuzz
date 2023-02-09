#include <iostream>

void fizzBuzzSimple();

int main () 
{
    fizzBuzzSimple();
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