#include <iostream>
#include <string>
bool isPalindrome(const std::string& str, int left, int right) {
    if (left >= right) return true;
    if (str[left] != str[right]) return false;
    return isPalindrome(str, left + 1, right - 1);
}
int main() {
    std::string word = "madam";
    std::cout << (isPalindrome(word, 0, word.size() - 1) ? "Palindrome" : "Not palindrome") << '\n';
    return 0;
}
