#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int N = 0;
    std::cin >> N;

    unsigned int Sum = 0, MaxNumber = 0;
    for (size_t i = 0; i < N; ++i)
    {
        unsigned int Num = 0;
        std::cin >> Num;
        Sum += Num;
        if (MaxNumber < Num)
            MaxNumber = Num;
    }

    std::cout << Sum - MaxNumber;

    return 0;
}