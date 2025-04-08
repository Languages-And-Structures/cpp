#include <iostream>
#include <string>

void reverseString(std::string &str, int left, int right)
{
    if (left >= right)
        return;
    std::swap(str[left], str[right]);
    reverseString(str, left + 1, right - 1);
}

int main()
{
    std::string s = "hello";
    reverseString(s, 0, s.size() - 1);
    std::cout << "Reversed string: " << s << '\n';
    return 0;
}
