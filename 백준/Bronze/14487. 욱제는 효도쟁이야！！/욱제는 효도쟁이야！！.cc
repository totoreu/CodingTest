#include <iostream>

int main()
{
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