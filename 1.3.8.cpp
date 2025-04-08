#include <iostream>
int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main() {
    int n = 1234;
    std::cout << "Sum of digits: " << sumDigits(n) << '\n';
    return 0;
}
