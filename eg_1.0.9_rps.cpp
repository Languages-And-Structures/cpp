#include <iostream>
#include <ctime>

char user_choice();
char computer_choice();
void display_winner(char user, char computer);
void showchoice();

char user_choice()
{
    char choice;
    do
    {

        std::cout << "Enter your choice : " << std::endl;
        std::cout << "1. r for rock" << std::endl;
        std::cout << "2. p for paper" << std::endl;
        std::cout << "3. s for scissors" << std::endl;
        std::cout << "Please enter your choice: ";
        std::cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char computer_choice()
{
    char choice;
    srand(time(0));          // Seed for random number generation
    int random = rand() % 3; // Generate a random number between 0 and 2

    switch (random)
    {
    case 0:
        choice = 'r'; // Rock
        break;
    case 1:
        choice = 'p'; // Paper
        break;
    case 2:
        choice = 's'; // Scissors
        break;
    }
    return choice;
}

void display_winner(char user, char computer)
{
    if (user == computer)
    {
        std::cout << "It's a tie!" << std::endl;
    }
    else if ((user == 'r' && computer == 's') || (user == 'p' && computer == 'r') || (user == 's' && computer == 'p'))
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "Computer wins!" << std::endl;
    }
}

void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout <<"Rock" << std::endl;
        break;
    case 'p':
        std::cout <<"Paper" << std::endl;
        break;
    case 's':
        std::cout <<"Scissors" << std::endl;
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
    }
}

int main()
{
    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    std::cout << "You will play against the computer." << std::endl;

    char player;
    char computer;

    player = user_choice();
    std::cout << "You chose: ";
    showchoice(player);

    computer = computer_choice();
    std::cout << "Computer chose: ";
    showchoice(computer);

    display_winner(player, computer);
    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}