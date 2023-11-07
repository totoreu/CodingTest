#include <iostream>
#include <vector>
#include <string>

int main()
{
    size_t N = 0;
    std::cin >> N;
    
    std::vector<std::string> Array;
    for (int i = 0; i < N; ++i)
    {
        size_t LT = 0, WT = 0, LE = 0, WE = 0;
        std::cin >> LT >> WT >> LE >> WE;
        size_t Tel = LT * WT;
        size_t Eur = LE * WE;
        if (Tel > Eur)
            Array.emplace_back("TelecomParisTech");
        else if (Tel < Eur)
            Array.emplace_back("Eurecom");
        else
            Array.emplace_back("Tie");
    }

    for (const std::string& Str : Array)
    {
        std::cout << Str << std::endl;
    }

    return 0;
}