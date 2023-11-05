#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;

    std::vector<std::string> FlowerLeafs;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;
        FlowerLeafs.emplace_back(Str);
    }

    for (const std::string& Leafs : FlowerLeafs)
    {
        int Half = Leafs.length() / 2 - 1;
        if (Leafs[Half] == Leafs[Half + 1])
        {
            std::cout << "Do-it" << std::endl;
        }
        else
        {
            std::cout << "Do-it-Not" << std::endl;
        }
    }
    
    return 0;
}