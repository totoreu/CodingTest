#include <iostream>
#include <vector>
#include <algorithm>

struct SData
{
    unsigned int Price = 0;
    std::string Name;
};

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    for (size_t i = 0; i < N; i++)
    {
        unsigned int M = 0;
        std::cin >> M;

        std::vector<SData> DataArray(M);
        for (size_t j = 0; j < M; j++)
        {
            std::cin >> DataArray[j].Price >> DataArray[j].Name;
        }

        auto FindIt = *std::max_element(DataArray.begin(), DataArray.end(),
            [](const SData& x, const SData& y)
            {
                return x.Price < y.Price;
            });

        std::cout << FindIt.Name << std::endl;

        DataArray.clear();
    }
    
    return 0;
}