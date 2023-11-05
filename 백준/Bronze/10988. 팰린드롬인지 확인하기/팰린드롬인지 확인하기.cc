#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string Str, StrTemp;
    std::cin >> Str;
    StrTemp = Str;
    std::reverse(Str.begin(), Str.end());
    if (Str == StrTemp)
    {
        std::cout << 1;
    }
    else
    {
        std::cout << 0;
    }

    return 0;
}