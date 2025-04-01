#include <iostream>

int main()
{
    int lop;
    std ::cout << " enter the logical operator according to its corroesponding number" << '\n';
    std ::cout << " 1 for :&&" << '\n';
    std ::cout << " 2 for :||" << '\n';
    std ::cout << " 3 for :!" << '\n';
    std ::cin >> lop;

    switch (lop)
    {
    case 1:
        std ::cout << "check for odd number " << '\n';

        int num1;
        std ::cout << " enter the number" << '\n';
        std ::cin >> num1;

        if (num1 % 2 == 0 && num1 > 0)
        {
            std ::cout << " the number is even" << '\n';
        }
        else if (num1 % 2 != 0 && num1 > 0)
        {
            std ::cout << " the number is odd" << '\n';
        }
        else
        {
            std ::cout << " the number is negative" << '\n';
        }

        // if (num1 & 1){
        //     std::cout << num1 << " is Odd\n";
        // }
        // else {
        //     std::cout << num1 << " is Even\n";
        // }
        // break;

    case 2:
        int age;
        char hasLicense;

        std::cout << "Enter your age: ";
        std::cin >> age;
        std::cout << "Do you have a driving license? (Y/N): ";
        std::cin >> hasLicense;

        if (age >= 18 || hasLicense == 'Y' || hasLicense == 'y')
        {
            std::cout << "You are eligible to drive.\n";
        }
        else
        {
            std::cout << "You are not eligible to drive.\n";
        }
        break;

    case 3:
    int age;
    char hasLicense;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Do you have a driving license? (Y/N): ";
    std::cin >> hasLicense;

    if (!(age >= 18 && (hasLicense == 'Y' || hasLicense == 'y'))) {
        std::cout << "You are NOT eligible to drive.\n";
    } else {
        std::cout << "You meet both requirements to drive.\n";
    }
        break;

    default:
        std ::cout << "Invalid input" << '\n';
        break;
    }
    return 0;
    
}