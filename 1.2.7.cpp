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