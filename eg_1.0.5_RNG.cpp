#include <iostream>
#include <ctime>

int main (){
    srand(time(NULL)); // Seed the random number generator with the current time
    int mun = (rand() % 6)+ 1; // Generate a random number between 1 and 6
    // The modulo operator (%) is used to limit the range of the random number

    std::cout << "Random number: " << mun << std::endl;
    return 0;
}