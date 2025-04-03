#include <iostream>

int main()
{

    std::string car[] = {"Toyota", "Honda", "Ford", "Chevrolet", "Nissan"};

    // std::string is an object that manages memory dynamically
    
    // so we can use sizeof() to get the size of the array in bytes 
    
    // it does not return the length of the string’s content 
    // (e.g., "Toyota" has 6 characters) but rather the fixed size of the 
    // std::string object itself (which typically is around 32 bytes, 
    // though this depends on the system and compiler).

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    std::cout << car[3] << '\n';

    std::cout << '\n';
    std::cout << "........................................." << '\n';
    std::cout << '\n';

    int a = sizeof(car) / sizeof(car[0]);
    for (int i = 0; i < a; i++)
    {
        std::cout << car[i] << '\n';
    }
}