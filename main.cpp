#include <iostream>
#include <string>
#include <algorithm>

std::string reverseStr(std::string s) {
    std::reverse(s.begin(), s.end());
    return s;
}
