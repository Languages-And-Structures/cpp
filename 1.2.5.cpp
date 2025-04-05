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