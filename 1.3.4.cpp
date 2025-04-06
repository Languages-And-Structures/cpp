#include <iostream>

void walk(int n)
{
    if (n == 0)
    {
        std::cout << "You now standin still moron !! " << '\n';
    }
    else
    {
        // 1. iterative approach

        // for (int i = 0; i < n; i++)
        // {
        //     std::cout << "You have walked " << i+1 << " steps." << '\n';
        // }

        //2. recursive approach

        std::cout << "You have walked " << n << " steps." << '\n';
        walk(n - 1); // Recursive call to walk with n-1 steps
    }
}

int main()
{
    walk(10);
    return 0;
}