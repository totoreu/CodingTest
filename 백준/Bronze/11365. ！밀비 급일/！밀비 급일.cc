#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> StrArray;
    while (true)
    {
        std::string Str;
        getline(std::cin, Str);

        if (Str == "END")
        {
            break;
        }

        std::reverse(Str.begin(), Str.end());
        StrArray.emplace_back(Str);
    }
    for (const std::string Str : StrArray)
    {
        std::cout << Str << std::endl;
    }

    return 0;
}