#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    std::vector<unsigned int> Distance;
    for (size_t i = 0; i < N; ++i)
    {
        unsigned int Num = 0;
        std::cin >> Num;
        Distance.emplace_back(Num);
    }
    std::sort(Distance.begin(), Distance.end());

    unsigned int Sum = 0;
    Sum = std::accumulate(Distance.begin(), Distance.end() - 1, 0);

    std::cout << Sum;

    return 0;
}