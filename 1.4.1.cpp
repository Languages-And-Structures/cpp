#include <iostream>

int countZeros(int n)
{
    if (n == 0)
        return 0;
    return ((n % 10 == 0) ? 1 : 0) + countZeros(n / 10);
}

int main()
{
    int num = 102030;
    std::cout << "Number of zeros: " << countZeros(num) << '\n';
    return 0;
}
