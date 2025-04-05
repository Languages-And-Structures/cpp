
#include <iostream>

int main()
{

    std::cout << "hello there" << std::endl;
    // std::endl flush the output buffer

    std::cout << "whats going on" << '\n';
    // better performance wise

    std::cout << "anything new" << '\n';
}

#include <iostream>

int main()
{
    //  varivbles and data types

    int x = 5;
    std ::cout << x << '\n';

    // integer
    int age = 12;
    int day = 7;
    int year = 2025;
    std ::cout << age << '\n';
    std ::cout << day << '\n';
    std ::cout << year << '\n';

    // double
    double price = 10.99;
    double temperature = 25.234762;
    std ::cout << price << '\n';
    std ::cout << temperature << '\n';

    // float
    float length = 12.3298616184659855789;
    std ::cout << length << '\n';

    // char
    char grade = 'a';
    char choice = 'y';
    std ::cout << grade << '\n';
    std ::cout << choice << '\n';

    // boolean
    bool student = true;
    bool pwr = false;
    std ::cout << student << '\n';
    std ::cout << pwr << '\n';

    // string : represent sequence of text
    std::string name = "dev";
    std ::cout << name << '\n';
}

#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    const double PI = 3.14;
    const int SPL = 299792458;

    // CONST make converts to read only

    // namespace
    std ::cout << first::x;
    std ::cout << second::x;

    // can also use using namespace name
    // or
    // {

    // } // namespace name
}

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>>pairlist_t
typedef std::string str;

// using new_datatype = existing_datatype ;

int main()
{
    // typdef
    str a = "Hello";
    std::cout << a << '\n';
}

#include <iostream>

int main()
{
    // arithmetic operator

    int stu = 20;
    std::cout << stu << '\n';
    stu += 2;
    std::cout << stu << '\n';
    stu++;
    std::cout << stu << '\n';
}

#include <iostream>

int main()
{
    // type conversion

    int x = 3.14;
    // implicit type conversdion
    std::cout << x << '\n';

    double y = 3.14;
    std::cout << y << '\n';
    double z = (int)3.14;
    std::cout << z << '\n';

    int a = 80;
    int b = 100;
    double c = (double)a / (double)b * 100;
    std::cout << c << '\n';
}

#include <iostream>

int main()
{
    // insertion operator <<
    // extraction operator >>
    // cout
    // cin

    std::string name;
    std::cout << "Pls enter your name :";
    std::cin >> name;
    std::cout << "Hello " << name;

    // std::getline(std::cin , name);   used when we want to enter name with spaces
    // but if we use this after some input then there is a \n remaining in the buffer in so there might be some errors
    // we can use std::getline(std::cin >> std::ws, name);
    // the std ws will remove any whitespace or new line remaining in the buffer
}

#include <iostream>
#include <cmath>

int main()
{
    double x;
    double y;
    double z;

    std::cout << "Enter side one of triangle: ";
    std::cin >> x;
    std::cout << "Enter side two of triangle: ";
    std::cin >> y;
    std::cout << "The hypotenuse is: " << sqrt(x * x + y * y) << std::endl;

    return 0;
}

#include <iostream>

int main()
{

    int age;
    int speed;

    std ::cout << "Enter your age: ";
    std ::cin >> age;

    std ::cout << "Enter your speed: ";
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
        std ::cout << "keep going buddy" << '\n';
    }
    else
    {
        std ::cout << "You are pretty old" << '\n';
    }
    return 0;
}

#include <iostream>

int main()
{
    int month;
    std ::cout << "Enter the month number: ";
    std ::cin >> month;

    switch (month)
    {
    case 1:
        std ::cout << "January" << '\n';
        break;
    case 2:
        std ::cout << "February" << '\n';
        break;
    case 3:
        std ::cout << "March" << '\n';
        break;
    case 4:
        std ::cout << "April" << '\n';
        break;
    case 5:
        std ::cout << "May" << '\n';
        break;
    case 6:
        std ::cout << "June" << '\n';
        break;
    case 7:
        std ::cout << "July" << '\n';
        break;
    case 8:
        std ::cout << "August" << '\n';
        break;
    case 9:
        std ::cout << "September" << '\n';
        break;
    case 10:
        std ::cout << "October" << '\n';
        break;
    case 11:
        std ::cout << "November" << '\n';
        break;
    case 12:
        std ::cout << "December" << '\n';
        break;
    default:
        std ::cout << "Invalid month number" << '\n';
    }
    return 0;
}

#include <iostream>

int main()
{
    int grade;
    std ::cout << "Enter your grade: ";
    std ::cin >> grade;

    grade >= 90 ? std::cout << "Exelent job" : grade >= 75 && grade < 90 ? std ::cout << "well done keep improving"
                                           : grade >= 55 && grade < 75   ? std ::cout << "you need to work harder"
                                                                         : std ::cout << "start studying";
    return 0;
}

#include <iostream>

int main()
{
    int scale1;
    int scale2;
    std::cout << "Enter the option number according to the scale of the temperature: " << '\n';
    std::cout << "1 for Celsius" << '\n';
    std::cout << "2 for Fahrenheit" << '\n';
    std::cout << "3 for Kelvin" << '\n';
    std::cin >> scale1;

    std::cout << "Enter the option number according to the scale of the temperature ((to be converted): " << '\n';
    std::cout << "1 for Celsius" << '\n';
    std::cout << "2 for Fahrenheit" << '\n';
    std::cout << "3 for Kelvin" << '\n';
    std::cin >> scale2;

    double temp1;
    std::cout << "Enter the orignal temperature: ";
    std::cin >> temp1;

    double temp2;

    switch (scale1)
    {
    case 1:
        switch (scale2)
        {
        case 1:
            temp2 = temp1;
            std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
            break;
        case 2:
            temp2 = (temp1 * 9 / 5) + 32;
            std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
            break;
        case 3:
            temp2 = temp1 + 273.15;
            std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
            break;
        default:
            std::cout << "Invalid scale" << '\n';
        }
        break;
    case 2:
        switch (scale2)
        {
        case 1:
            temp2 = (temp1 - 32) * 5 / 9;
            std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
            break;
        case 2:
            temp2 = temp1;
            std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
            break;
        case 3:
            temp2 = ((temp1 - 32) * 5 / 9) + 273.15;
            std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
            break;
        default:
            std::cout << "Invalid scale" << '\n';
        }
        break;
    case 3:
        switch (scale2)
        {
        case 1:
            temp2 = temp1 - 273.15;
            std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
            break;
        case 2:
            temp2 = ((temp1 - 273.15) * 9 / 5) + 32;
            std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
            break;
        case 3:
            temp2 = temp1;
            std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
            break;
        default:
            std::cout << "Invalid scale" << '\n';
        }
        break;
    default:
        std::cout << "Invalid scale" << '\n';
    }
}

#include <iostream>
#include <string> // Required for std::string

int main()
{
    std::string name1;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name1);

    std::string name = name1; // Copying the input to another string variable

    // 1. Checking string length
    if (name.size() >= 6)
    {
        std::cout << "Hello, the size of your name " << name << " is : " << name.size() << std::endl;
    }
    else
    {
        std::cout << "Btw, your name is too short." << std::endl;
    }

    // 2. Checking if the string is empty
    if (name.empty())
    {
        std::cout << "Your name is empty." << std::endl;
    }
    else
    {
        std::cout << "Your name is not empty." << std::endl;
    }

    // 3. Appending string
    name1.append("@karter.ac.in");
    std::cout << "We have assigned you a new email ID: " << name1 << " ." << std::endl;

    // 4. Clearing the string (Uncomment if needed)
    // name.clear();
    // std::cout << "Your name is cleared, see! Nothing printed before now." << std::endl;

    // 5. Accessing character at a given index
    int index;
    std::cout << "Enter the index of the character you want to see: ";
    std::cin >> index;

    if (index >= 0 && index < name.size())
    {
        std::cout << "The character at index " << index << " is: " << name.at(index) << std::endl;
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }

    // Fix for input buffer issue (Clearing newline character)
    std::cin.ignore();

    // 6. Inserting a string at a given index
    std::string str;
    std::cout << "Enter a string to insert: ";
    std::getline(std::cin, str);

    int insertIndex;
    std::cout << "Enter the index at which you want to insert the string: ";
    std::cin >> insertIndex;

    if (insertIndex >= 0 && insertIndex <= name.size())
    {
        name.insert(insertIndex, str);
        std::cout << "The string after insertion is: " << name << std::endl;
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }

    // 7 . finding the first occurrence of a character
    char ch;
    std::cout << "Enter the character you want to find: ";
    std::cin >> ch;
    // std :: cout << name.find(ch)<< std::endl;
    std::cout << "The first occurrence of the character " << ch << " is at index: " << name.find(ch) << std::endl;

    // 8. Finding the last occurrence of a character
    std::cout << "The last occurrence of the character " << ch << " is at index: " << name.rfind(ch) << std::endl;

    // 9. Finding the occurrence of a string
    std::string str2;
    std::cout << "Enter the string you want to find: ";
    std::cin.ignore(); // Clear the newline character from the input buffer
    std::getline(std::cin, str2);
    std::cout << "The occurrence of the string " << str2 << " is at index: " << name.find(str2) << std::endl;

    std::cout << "The last occurrence of the string " << str2 << " is at index: " << name.rfind(str2) << std::endl;

    // 10. Replacing a string
    std::string str3;
    std::cin.ignore();
    std::cout << "Enter the string you want to replace: ";
    std::getline(std::cin, str3);

    std::cin.ignore();
    std::string str4;
    std::cout << "Enter the string you want to replace with: ";
    std::getline(std::cin, str4);

    name.replace(name.find(str3), str3.size(), str4);
    std::cout << "The string after replacement is: " << name << std::endl;

    // 11. Erasing a string
    std::string str5;
    std::cin.ignore();
    std::cout << "Enter the string you want to erase: ";
    std::getline(std::cin, str5);
    name.erase(name.find(str5), str5.size());
    std::cout << "The string after erasing is: " << name << std::endl;

    // 12. Comparing strings
    std::string str6;
    std::cin.ignore();
    std::cout << "Enter the string you want to compare: ";
    std::getline(std::cin, str6);
    if (name == str6)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else
    {
        std::cout << "The strings are not equal." << std::endl;
    }

    // When using std::cin >> to read an integer or a single word,
    // a leftover newline character (\n) remains in the input buffer.
    // If std::getline() is called afterward, it reads this leftover
    // newline instead of waiting for new input

    return 0;
}

#include <iostream>

int main()
{
    int x = 0;
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    while (a > 0)
    {
        x = x + a;
        a -= 1;
    }
    std::cout << "The sum of " << a << " natural is: " << x << '\n';
}

#include <iostream>

int main()
{
    int a = 1;
    int b;
    std::cout << "Enter a number: ";
    std::cin >> b;

    if (b == 0)
    {
        std::cout << "The factorial is: 1 " << '\n';
    }
    else
    {
        do
        {
            a = a * b;
            b -= 1;

        } while (b > 0);
        std::cout << "The factorial is: " << a << '\n';
    }

    return 0;
}

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

#include <iostream>

int main()
{
    for (int i = 0;; i++)
    {
        if (i == 156)
        {
            break;
        }
        if (i % 2 != 0)
        {
            continue;
        }
        std::cout << i + 1 << '\n';
    }
}

#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                std::cout << i << "." << j << "." << k << '\n';
            }
        }
    }
}

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

#include <iostream>

// multiple functions can have sa,e name but different parameters changing their signsture
// this is called function overloading

void bake_cake();
void bake_cake(std::string type);
void bake_cake(std::string type, int layers);

void bake_cake()
{
    std::cout << "Baking a cake!" << std::endl;
}

void bake_cake(std::string type)
{
    std::cout << "Baking a " << type << " cake!" << std::endl;
}

void bake_cake(std::string type, int layers)
{
    std::cout << "Baking a " << layers << " layers " << type << " cake!" << std::endl;
}

int main()
{
    int choice;
    std::cout << "Enter your choice to select a cake function : " << std::endl;
    std::cout << "1. Bake a cake" << std::endl;
    std::cout << "2. Bake a type of cake" << std::endl;
    std::cout << "3. Bake a type of cake with layers" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::string type;
    std::string type2;
    int layers;

    switch (choice)
    {
    case 1:
        bake_cake();
        break;

    case 2:
        std::cout << "Enter the type of cake: ";
        std::cin >> type;
        bake_cake(type);
        break;

    case 3:
        std::cout << "Enter the type of cake: ";
        std::cin >> type2;
        std::cout << "Enter the number of layers: ";
        std::cin >> layers;
        bake_cake(type2, layers);
        break;

    default:
        std::cout << "Invalid choice!" << std::endl;
    }
    return 0;
}

#include <iostream>

double pi = 3.14; // global variable

double area(int radius)
{

    return (pi * radius * radius); // function to calculate area of circle
}

int main()
{

    int radius; // local variable

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Area of the circle: " << area(radius) << std::endl; // function call to calculate area of circle
    std::cout << "Value of pi: " << pi << std::endl;                  // accessing global variable
}

#include <iostream>

int main()
{

    std::string car[] = {"Toyota", "Honda", "Ford", "Chevrolet", "Nissan"};

    // std::string is an object that manages memory dynamically
    
    // so we can use sizeof() to get the size of the array in bytes 
    
    // it does not return the length of the string’s content 
    // (e.g., "Toyota" has 6 characters) but rather the fixed size of the 
    // std::string object itself (which typically is around 32 bytes, 
    // though this depends on the system and compiler).

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    std::cout << car[3] << '\n';

    std::cout << '\n';
    std::cout << "........................................." << '\n';
    std::cout << '\n';

    int a = sizeof(car) / sizeof(car[0]);
    for (int i = 0; i < a; i++)
    {
        std::cout << car[i] << '\n';
    }
}

#include <iostream>

int main()
{

    std::string car[] = {"Toyota", "Honda", "Ford", "Chevrolet", "Nissan"};

    // std::string is an object that manages memory dynamically
    
    // so we can use sizeof() to get the size of the array in bytes 
    
    // it does not return the length of the string’s content 
    // (e.g., "Toyota" has 6 characters) but rather the fixed size of the 
    // std::string object itself (which typically is around 32 bytes, 
    // though this depends on the system and compiler).

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    std::cout << car[3] << '\n';

    std::cout << '\n';
    std::cout << "........................................." << '\n';
    std::cout << '\n';

    int a = sizeof(car) / sizeof(car[0]);
    for (int i = 0; i < a; i++)
    {
        std::cout << car[i] << '\n';
    }
}


#include <iostream>

int main (){
    // sizeof() returns the number of elements in the array

    int a = 1946;
    char ch = 'A';
    float f = 3.14f;
    double d = 3.14159;
    std::string str = "Hello, World!";
    bool b = true;
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout<<'\n';
    std::cout << "Size of int: " << sizeof(a) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of char: " << sizeof(ch) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of float: " << sizeof(f) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of double: " << sizeof(d) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of string: " << sizeof(str) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of bool: " << sizeof(b) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of array: " << sizeof(arr) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of std::string : " << sizeof(std::string) << " bytes\n";
    std::cout<<'\n';
}


#include <iostream>

// for each loop is used to iterate over elements in a container (like an array or vector)
// without needing to use an index. It simplifies the syntax and makes the code cleaner 
// and easier to read.

int main(){
    int grades[5] = {90, 85, 78, 92, 88};

    for(int grade : grades){
        std::cout << "Grade: " << grade << '\n';
    }
    std::cout<<'\n';
}


#include <iostream>

double gettotal(double prices[]);
// Function to calculate the total price of items in an array   

double gettotal(double prices[])
{
    double total = 0.0;

    // Using a for loop to iterate over the array and calculate the total price
    // The loop runs 5 times, once for each element in the array.               
        
    for (int i = 0; i < 5; i++)
    {
        total += prices[i];
    }
    
    return total;
}

int main()
{

    double prices[] = {19.99, 29.99, 39.99, 49.99, 59.99};

    double total = gettotal(prices);
    std::cout << "Total: " << total << " $"<< '\n';
    std::cout << '\n';


    return 0;
}


#include <iostream>


int search(int num[], int size, int my_num)
{
    // Function to search for an element in an array    
    // The function takes an array, its size, and the number to search for
    // as parameters.   

    // It returns the index of the element if found, or -1 if not found.

    // The function uses a for loop to iterate over the array and compare 
    // each element with the target number.  
    for (int i = 0; i < size; i++)
    {
        if (num[i] == my_num)
        {
            return i;
        }
    }
    return -1; // not found
}


int main()
{

    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num) / sizeof(num[0]);

    int index;
    int my_num;

    std::cout << "entrer element to search :";
    std::cin >> my_num;

    int searching = search(num , size , my_num);
    
    // The search function is called with the array, its size, and the 
    // number to search for.    
    
    // The result is stored in the variable searching. 

    if (searching != -1)// If the element is found, the index is printed.
    {
        std::cout << "Element found at index: " << searching << '\n';
    }
    else
    // If the element is not found, a message is printed indicating 
    // that the element was not found.
    {
        std::cout << "Element not found" << '\n';
    }

    return 0;
}


#include <iostream>

// int get_array();
// int get_array(int ele){
// }

void sort();
void sort(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    { // Loop to iterate through the array
        for (int j = 0; j < size - i - 1; j++)
        { // Loop to compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1] ^ arr[j];
                arr[j + 1] = arr[j + 1] ^ arr[j];
                arr[j] = arr[j + 1] ^ arr[j]; // Swap the elements if they are in the wrong order
            }
        }
    }
    std::cout << "Sorted array: ";
    for (int k = 0; k < size; k++)
    {
        std::cout << arr[k] << " "; // Print the sorted array
    }
}

int main()
{
    int ele;
    std::cout << "Enter the number of elements: ";
    std::cin >> ele;

    int arr[ele]; // Declare an array of size ele
    for (int i = 0; i < ele; i++)
    {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i]; // Store the elements in the array
    }
    std::cout << "Unsorted array: ";
    for (int i = 0; i < ele; i++)
    {
        std::cout << arr[i] << " "; // Print the unsorted array
    }
    std::cout << std::endl;

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    sort(arr, size);                         // Call the sort function with the array and its size
}


#include <iostream>

int main(){
    //fill() = fills the array with a value
    //fill_n() = fills the array with a value for n times       

    std::string food[100];

    fill(food, food + 100, "pizza"); // syntax for fill() = fill(start, end, value)

    for (std::string i : food){
        std::cout << i << '\n';
    }
    return 0;
}


#include <iostream>

int main(){

    std::string name = "John Doe";
    int age = 30;
    bool working = true;

    std::cout << &name << '\n'; // Address of name
    std::cout << &age << '\n'; // Address of age    
    std::cout << &working << '\n'; // Address of working

}


#include <iostream>

//pass by value
// The function swap takes two strings as parameters and swaps their values
void swap(std::string a, std::string b) {
    std::string temp = a; // Store the value of a in a temporary variable
    a = b;               // Assign the value of b to a
    b = temp;           // Assign the value of temp (original a) to b
}

// pass by reference
void swap1(std::string &a, std::string &b) {
    std::string temp = a; // Store the value of a in a temporary variable
    a = b;               // Assign the value of b to a
    b = temp;           // Assign the value of temp (original a) to b
}

int main(){

    std::string name = "John Doe";
    std::string name1 = "Mr Otter";
    
    std::cout << "name before swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the name
    std::cout << "Name1: " << name1 << '\n'; // Print the name1

    swap(name, name1); // Swap the values of name and name1 using the swap function
    
    std::cout << std::endl;
    
    std::cout << "name after pass by value swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the swapped name    
    std::cout << "Name1: " << name1 << '\n'; // Print the swapped name1

    swap1(name, name1); // Swap the values of name and name1 using the swap1 function

    std::cout << std::endl;
    
    std::cout << "name after pass by reference swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the swapped name
    std::cout << "Name1: " << name1 << '\n'; // Print the swapped name1
}


#include <iostream>

int main(){
    // pointres
    // &# = address of operator
    // * = dereference operator

    std::string name = "John Doe";
   
    std::string *ptr = &name; // Pointer to the address of name
    std::cout << "Address of name: " << &name << '\n'; 

    std::string free_pizza[5] = {"pepperoni", "cheese", "veggie", "meat lovers", "hawaiian"}; // Array of strings   
    std::string *ptr1 = free_pizza; // Pointer to the first element of the array

    //name of an array is a pointer to the first element of the array
    std::cout << "Address of free_pizza: " << &free_pizza << '\n'; // Address of the array  
    std::cout << "Address of free_pizza: " << free_pizza << '\n'; // Address of the array  


}


#include <iostream>

int main (){
    //  null pointer = a pointer that does not point to any object or function
    //  dangling pointer = a pointer that points to a memory location that has been freed or deleted
    //  wild pointer = a pointer that has not been initialized to point to a valid memory location  
    //  smart pointer = a pointer that automatically manages the memory of the object it points to  
    //  unique pointer = a smart pointer that owns a single object and cannot be shared with other pointers
    //  shared pointer = a smart pointer that can be shared with other pointers and keeps track of the number of references to the object it points to
    //  weak pointer = a smart pointer that does not affect the reference count of the object it points to  
    //  auto pointer = a smart pointer that automatically deletes the object it points to when it goes out of scope
    //  reference pointer = a pointer that refers to an object or function and does not own it
    //  function pointer = a pointer that points to a function and can be used to call the function
    //  array pointer = a pointer that points to an array and can be used to access the elements of the array
    //  pointer to pointer = a pointer that points to another pointer and can be used to access the value of the pointer it points to
    //  pointer to function = a pointer that points to a function and can be used to call the function
    //  pointer to array = a pointer that points to an array and can be used to access the elements of the array
    //  pointer to structure = a pointer that points to a structure and can be used to access the members of the structure


    int * ptr = nullptr; // null pointer
    
    int x = 10; 
    int * ptr1 = &x; // pointer to x

    if(ptr1 != nullptr) // check if ptr1 is not null
    {
        std::cout << "address assigned succesfully " << '\n'; // 
    }
    else
    {
        std::cout << "address not assigned" << '\n'; // out of memory
    }


    std::cout << std::endl;
    std::cout << "address of x: " << &x << '\n'; // address of x
    std::cout << std::endl;
    std::cout << "address of x: " << ptr1 << '\n'; // address of ptr1
    std::cout << std::endl;
    std::cout << "address of ptr1: " << &ptr1 << '\n'; // address of ptr1
    std::cout << std::endl;
    std::cout << "value of x: " << *ptr1 << '\n'; // value of x
    std::cout << std::endl;
    std::cout << "value of x: " << x << '\n'; // value of ptr1
    std::cout << std::endl;
    std::cout << "value pointed by ptr1: " << *ptr1 << '\n'; // value of ptr1
    std::cout << std::endl;
    
    return 0; // return 0 to indicate success
}


#include <iostream>

int main()
{
    // dynamic memory = memory that is allocated at runtime using the new operator
    int *ptr = nullptr; // Allocate memory for an integer

    ptr = new int; // Allocate memory for an integer
    *ptr = 10;     // Assign a value to the allocated memory

    std::cout << "Value of ptr: " << *ptr << '\n';  // Print the value of the allocated memory
    std::cout << "Address of ptr: " << ptr << '\n'; // Print the address of the allocated memory

    delete ptr;    // Deallocate the memory
    ptr = nullptr; // Set the pointer to null to avoid dangling pointer


    
    std::cout << "enter the number of grades: " ; // Prompt the user to enter the number of grades"
    int num_grades;
    std::cin >> num_grades; // Read the number of grades from the user
    
    std::cout << '\n'; // Print a newline character

    char *grade = nullptr;        // Allocate memory for a character
    grade = new char[num_grades]; // Allocate memory for a character

    for (int i = 0; i < num_grades; i++) // Loop to read the grades from the user
    {
        std::cout << "Enter grade " << i + 1 << ": "; // Prompt the user to enter a grade
        std::cin >> grade[i];                         // Read the grade from the user
    }

    std::cout << '\n'; // Print a newline character

    for (int i = 0; i < num_grades; i++) // Loop to print the grades
    {
        std::cout << "Grades " << i+1 << " : " << grade[i] << " \n"; // Print the grade

    }
    std::cout << '\n'; // Print a newline character

    delete[] grade; // Deallocate the memory for the grades
    grade = nullptr; // Set the pointer to null to avoid dangling pointer
}