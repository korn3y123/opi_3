#include <iostream>
#include <string>
#include <algorithm>

std::string reverseStr(std::string s) {
    std::reverse(s.begin(), s.end());
    return s;
}

int main() {
    std::cout << reverseStr("hello") << std::endl; // olleh
    return 0;
}