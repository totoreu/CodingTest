#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<unsigned int> Gnome;
    for (size_t i = 0; i < 9; i++)
    {
        unsigned int Height = 0;
        std::cin >> Height;
        Gnome.emplace_back(Height);
    }

    std::sort(Gnome.begin(), Gnome.end());

    unsigned int Sum = std::accumulate(Gnome.begin(), Gnome.end(), 0);
    for (size_t i = 0; i < Gnome.size(); i++)
    {
        for (size_t j = i + 1; j < Gnome.size(); j++)
        {
            if (Sum - Gnome[i] - Gnome[j] == 100)
            {
                for (size_t k = 0; k < Gnome.size(); k++)
                {
                    if (k != i && k != j)
                        std::cout << Gnome[k] << std::endl;
                }
                return 0;
            }
        }
    }

    return 0;
} 