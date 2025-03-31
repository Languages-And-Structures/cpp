#include <iostream>

int main()
{

    int age;
    int speed;

    std ::cout << "Enter your age: " ;
    std ::cin >> age;

    std ::cout << "Enter your speed: " ;
    std ::cin >> speed;
    
    if (age < 18)
    {
        std ::cout << "You are a minor" << '\n';
    }
    else if (age >= 18 && age < 60 && speed > 60)
    {

        std ::cout << "We know that you are an adult, but slow down as death is also driving along" << '\n';
    }
    else if (age >= 18 && age < 60 && speed < 60)
    {
        std :: cout << "keep going buddy" << '\n' ;
    }
    else
    {
        std ::cout << "You are pretty old" << '\n';
    }
    return 0;
}