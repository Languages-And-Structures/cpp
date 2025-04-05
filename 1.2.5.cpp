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