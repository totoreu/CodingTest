#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;
    std::vector<std::string> StrArray;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;
        for (char& Ch : Str)
        {
            Ch = std::tolower(Ch);
        }
        StrArray.emplace_back(Str);
    }

    for (const std::string Str : StrArray)
    {
        std::cout << Str << std::endl;
    }
        
    return 0;
}