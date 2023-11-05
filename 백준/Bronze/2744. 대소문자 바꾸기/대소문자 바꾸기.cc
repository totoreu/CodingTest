#include <iostream>
#include <string>

int main()
{
    std::string Str;
    std::cin >> Str;
    for (char& ch : Str)
    {
        if (ch <= 'Z')
        {
            ch = std::tolower(ch);
        }
        else if (ch <= 'z')
        {
           ch = std::toupper(ch);
        }
    }
    std::cout << Str;

    return 0;
}