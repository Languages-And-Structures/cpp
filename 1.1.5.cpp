#include <iostream>

int main()
{
    int a = 1;
    int b;
    std::cout << "Enter a number: ";
    std::cin >> b;

    if (b == 0)
    {
        std::cout << "The factorial is: 1 " << '\n';
    }
    else
    {
        do
        {
            a = a * b;
            b -= 1;

        } while (b > 0);
        std::cout << "The factorial is: " << a << '\n';
    }
    
    return 0;
}