#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<std::string> StrArray;
    while (true)
    {
        std::string Str;
        std::cin >> Str;

        if (Str == "0")
        {
            break;
        }
        
        StrArray.emplace_back(Str);
    }

    for(std::string& Str : StrArray)
    {
        std::string StrTemp;
        StrTemp = Str;
        std::reverse(Str.begin(), Str.end());
        if (Str == StrTemp)
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
    }

    return 0;
}