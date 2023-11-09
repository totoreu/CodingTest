#include <iostream>
#include <vector>

/** 최소의 동전 갯수를 반환 : 그리디 */
const std::vector<unsigned int> Coins{ 500, 100, 50, 10, 5, 1 };

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    N = 1000 - N;

    size_t index = 0, Count = 0;;
    while (index < Coins.size())
    {
        unsigned int Coin = Coins[index];
        if (N >= Coin)
        {
            unsigned int Div = N / Coin;
            Count += Div;
            N %= Coin;
        }
        else
            index++;
    }
    std::cout << Count;

    return 0;
}