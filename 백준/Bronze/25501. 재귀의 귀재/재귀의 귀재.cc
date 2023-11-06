#include <iostream>
#include <string>
#include <vector>

int recursion(const std::string& s, int l, int r, int& count) {
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, count);
}

std::pair<int, int> isPalindrome(const std::string& s) {
    int count = 0;
    return {recursion(s, 0, s.length() - 1, count), count};
}

int main() {
    size_t N;
    std::cin >> N;

    std::vector<std::pair<int, int>> ValuesArray;
    for (size_t i = 0; i < N; i++)
    {
        std::string Str;
        std::cin >> Str;

        ValuesArray.emplace_back(isPalindrome(Str));
    }
    
    for (const auto& Values : ValuesArray)
    {
        std::cout << Values.first << " " << Values.second << std::endl;
    }

    return 0;
}