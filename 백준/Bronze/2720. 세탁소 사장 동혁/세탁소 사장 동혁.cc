#include <iostream>
#include <vector>

/** 최소의 동전 갯수를 반환 : 그리디*/
const std::vector<unsigned int> Coins{ 25, 10, 5, 1 };

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    std::vector<std::vector<unsigned int>> ChangeArray(N);
    for (size_t i = 0; i < N; i++)
    {
        unsigned int Change = 0;
        std::cin >> Change;

        for (const unsigned int& Coin : Coins)
        {
            unsigned int Div = Change / Coin;
            Change %= Coin;
            ChangeArray[i].emplace_back(Div);
        }
    }

    for (const auto& Array : ChangeArray)
    {
        for (const unsigned int& Elem : Array)
        {
            std::cout << Elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}