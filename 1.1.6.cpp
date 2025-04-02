#include <iostream>

int main()
{
    int a = 0;
    int b;

    std::cout << "Enter a number: ";
    std::cin >> b;

    for (int i = 0; i < b; i++)
    {
        a += (b - i) * (b - i);
    }

    std::cout << "sum of sqware of n natural numbers is : " << a << '\n';

    return 0;
}