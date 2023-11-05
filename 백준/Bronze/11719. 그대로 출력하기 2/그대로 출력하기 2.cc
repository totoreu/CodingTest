#include <iostream>
#include <string>

int main()
{
    std::string Str;
    for (int i = 0; i < 100; ++i)
    {
        std::getline(std::cin, Str);
        std::cout << Str << std::endl;
    }

    return 0;
}