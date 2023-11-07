#include <iostream>
#include <vector>


int main() 
{
    std::vector<std::pair<int, int>> Array;
    while (true)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;
        if (a == 0 && b == 0)
            break;

        Array.emplace_back(a, b);
    }
    for (const auto& N : Array)
    {
        if (N.first > N.second)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}