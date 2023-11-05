#include <iostream>
#include <string>
#include <vector>

const std::vector<char> Gathers{ 
    'a', 'e', 'i', 'o', 'u', 
    'A', 'E', 'I', 'O', 'U'
};

int main()
{
    std::vector<std::string> StrArray;
    while (true)
    {
        std::string Str;
        getline(std::cin, Str);

        if (Str == "#")
        {
            break;
        }
        StrArray.emplace_back(Str);
    }
    for (const std::string& Str : StrArray)
    {
        int NumCount = 0;
        for (const char& Ch : Str)
        {
            for (const char& Gather : Gathers)
            {
                if (Ch == Gather)
                {
                    NumCount++;
                    break;
                }
            }
        }
        std::cout << NumCount << std::endl;
    }

    return 0;
}