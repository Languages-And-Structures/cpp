#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));              // Seed the random number generator with the current time
    int rnum = (rand() % 5) + 1; // Generate a random number between 1 and 5

    switch (rnum)
    {
    case 1:
        std::cout << "yeah !! you won 10000$";
        break;

    case 2:
        std::cout << "yeah !! you won 5000$";
        break;

    case 3:
        std::cout << "yeah !! you won 2500$";
        break;

    case 4:
        std::cout << "yeah !! you won 1250$";
        break;

    case 5:
        std::cout << "yeah !! you won 625$";
        break;

    default:
        std::cout << "unknown error";
        break;
    }
}