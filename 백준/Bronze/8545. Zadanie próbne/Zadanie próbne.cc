#include <iostream>
#include <algorithm>

int main()
{
    std::string Str;
    std::cin >> Str;

    std::reverse(Str.begin(), Str.end());
    std::cout << Str;

    return 0;
}