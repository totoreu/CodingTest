#include <iostream>
#include <string>
#include <vector>

const std::vector<std::string> Class{
    {"MatKor"},
    {"WiCys"},
    {"CyKor"},
    {"AlKor"},
    {"$clear"}
};

int main()
{
    char Ch = ' ';
    std::cin >> Ch;

    for (const std::string& Str : Class)
    {
        if (Ch == Str[0])
        {
            std::cout << Str;
            break;
        }
    }

    return 0;
}