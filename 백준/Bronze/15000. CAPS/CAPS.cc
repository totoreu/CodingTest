#include <iostream>
#include <string>

int main()
{
    std::string Str;
    std::cin >> Str;

    for (char& Ch : Str)
    {
        Ch = std::toupper(Ch);
    }

    std::cout << Str;

    return 0;
}