#include <iostream>

int main (){

    int a;
    int b;

    std::cout << "Enter first numbers: ";
    std::cin >> a;
    std::cout << "Enter second numbers: ";
    std::cin >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cout <<". ";
        }
        std::cout << std::endl;
    }
    
}