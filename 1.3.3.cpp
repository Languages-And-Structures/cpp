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