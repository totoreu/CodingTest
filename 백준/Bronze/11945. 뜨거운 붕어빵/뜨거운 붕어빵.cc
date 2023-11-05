#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N = 0, M = 0;
    std::cin >> N >> M;

    std::vector<std::string> Bungeoppang;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;
        std::reverse(Str.begin(), Str.end());
        Bungeoppang.emplace_back(Str);
    }
    for (const std::string& Str : Bungeoppang)
    {
        std::cout << Str << std::endl;
    }
        
    return 0;
}