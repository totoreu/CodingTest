#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string Str;
    std::cin >> Str;

    int Num = std::stoi(Str);
    if (Str.find('7') == std::string::npos)
    {
        if (Num % 7 != 0)
            std::cout << "0";
        else
            std::cout << "1";
    }
    else
    {
        if (Num % 7 != 0)
            std::cout << "2";
        else
            std::cout << "3";
    }

    return 0;
}