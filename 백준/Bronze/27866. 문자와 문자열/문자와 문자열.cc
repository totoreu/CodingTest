#include <iostream>
#include <string>

int main()
{
    std::string Str;
    std::cin >> Str;

    int Num = 0;
    std::cin >> Num;

    std::cout << Str[Num - 1];

    return 0;
}