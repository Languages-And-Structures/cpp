#include <iostream>
#include <ctime>

int main (){

    int num;
    int guess;
    int attempts = 0 ;

    srand(time(NULL)); // Seed the random number generator with the current time
    num = (rand() % 100)+ 1; 

    do
    {
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> guess;
        attempts++;

        if (guess < num)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > num)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != num);
    
}

