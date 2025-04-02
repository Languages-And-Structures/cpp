#include <iostream>

int main()
{
    int x = 0;
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    while (a > 0)
    {
        x = x + a;
        a -= 1;
    }
    std::cout << "The sum of "<< a << " natural is: " << x << '\n';
}