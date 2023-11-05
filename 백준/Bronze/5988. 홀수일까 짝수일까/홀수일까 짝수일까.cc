#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Num = 0;
    std::cin >> Num;

    std::vector<std::string> StrArray;
    for (int i = 0; i < Num; ++i)
    {
        std::string Str;
        std::cin >> Str;
        
        int MaxIndex = Str.length() - 1;
        if (Str[MaxIndex] % 2 == 0)
        {
            StrArray.emplace_back("even");
        }
        if (Str[MaxIndex] % 2 == 1)
        {
            StrArray.emplace_back("odd");
        }
    }

    for (const std::string Str : StrArray)
    {
        std::cout << Str << std::endl;
    }
        
    return 0;
}