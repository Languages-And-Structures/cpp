#include <iostream>

bool isSorted(int *arr, int size)
{
    if (size <= 1)
        return true;
    if (arr[0] >= arr[1])
        return false;
    return isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << (isSorted(arr, n) ? "Sorted" : "Not sorted") << '\n';
    return 0;
}
