#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Num = 0;
    std::cin >> Num;
    std::cin.ignore();

    std::vector<std::string> StrArray;
    for (int i = 0; i < Num; ++i)
    {
        std::string Str;
        std::getline(std::cin, Str);
        Str[0] = std::toupper(Str[0]);
        StrArray.emplace_back(Str);
    }
    for (const std::string Str : StrArray)
    {
        std::cout << Str << std::endl;
    }
        
    return 0;
}