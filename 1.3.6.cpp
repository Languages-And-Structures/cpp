#include <iostream>
#include <string>

void reverse(const std::string &str, int index) {
    if (index < 0) return; // base case
    std::cout << str[index]; // print current character
    reverse(str, index - 1); // recursive call with previous index
}

int main() {
    std::string str;
    std::cout << "Enter a string to reverse: ";
    std::cin >> str;

    std::cout << "Reversed string: ";
    reverse(str, str.length() - 1); // start from last index
    std::cout << '\n';

    return 0;
}
