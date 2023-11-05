#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main()
{
    int N = 0;
    std::cin >> N;

    std::string Str;
    std::cin >> Str;

    int r = 31;
    int M = 1234567891;
    unsigned long long Sum = 0;
    for (int i = 0; i < N; ++i)
    {
        int Hash = Str[i] - 96;
        Sum += Hash * std::pow(r ,i);
    }

    std::cout << Sum % M;

    return 0;
}