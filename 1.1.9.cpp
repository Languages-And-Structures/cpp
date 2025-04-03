#include <iostream>

double add(double a, double b)
{
    return a + b;
}

double multiply(double a, double b)
{
    return a * b;
}

double subtract(double a, double b)
{
    return a - b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}

double min(double a, double b)
{
    return (a < b) ? a : b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 101; // or handle error as needed
    }
    return (double)a / (double)b;
}

double power(double base, double exp)
{
    if (exp < 0)
    {
        std::cerr << "Error: Negative exponent!" << std::endl;
        return 101; // or handle error as needed
    }
    double result = 1;
    for (double i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int choice;

    std::cout << "Enter your choice to select a mathematical function : " << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Power" << std::endl;
    std::cout << "6. Max" << std::endl;
    std::cout << "7. Min" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        double a, b;
        std::cout << "Enter two numbers to add: " << std::endl;
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;
        std::cout << "Result: " << add(a, b) << std::endl;
        break;

    case 2:
        double c, d;
        std::cout << "Enter two numbers to subtract: " << std::endl;
        ;
        std::cout << "Enter first number: ";
        std::cin >> c;
        std::cout << "Enter second number: ";
        std::cin >> d;
        std::cout << "Result: " << subtract(c, d) << std::endl;
        break;

    case 3:
        double e, f;
        std::cout << "Enter two numbers to multiply: " << std::endl;
        ;
        std::cout << "Enter first number: ";
        std::cin >> e;
        std::cout << "Enter second number: ";
        std::cin >> f;
        std::cout << "Result: " << multiply(e, f) << std::endl;
        break;

    case 4:
        double g, h;
        std::cout << "Enter two numbers to divide: " << std::endl;
        ;
        std::cout << "Enter numerator: ";
        std::cin >> g;
        std::cout << "Enter denominator: ";
        std::cin >> h;
        std::cout << "Result: " << divide(g, h) << std::endl;

        break;

    case 5:
        double i, j;
        std::cout << "Enter base and exponent: " << std::endl;
        std::cout << "Enter base: ";
        std::cin >> i;
        std::cout << "Enter exponent: ";
        std::cin >> j;
        std::cout << "Result: " << power(i, j) << std::endl;

        break;

    case 6:
        double k, l;
        std::cout << "Enter two numbers to find max: " << std::endl;
        ;
        std::cout << "Enter first number: ";
        std::cin >> k;
        std::cout << "Enter second number: ";
        std::cin >> l;
        std::cout << "Result: " << max(k, l) << std::endl;
        break;

    case 7:
        double m, n;
        std::cout << "Enter two numbers to find min: " << std::endl;
        ;
        std::cout << "Enter first number: ";
        std::cin >> m;
        std::cout << "Enter second number: ";
        std::cin >> n;
        std::cout << "Result: " << min(m, n) << std::endl;
        break;

    default:
        break;
    }
}