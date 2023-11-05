#include <iostream>
#include <string>

int main()
{
    std::string Str;
    std::cin >> Str;
    
    int Start = 0;
    while (true)
    {
        if (Str.length() - Start > 10)
        {
            std::string Sub = Str.substr(Start, 10);
            std::cout << Sub << std::endl;
            Start += 10;
        }
        else
        {
            std::string Sub = Str.substr(Start);
            std::cout << Sub;
            break;
        }
    }

    return 0;
}