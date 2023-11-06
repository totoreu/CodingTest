#include <iostream>

int main() 
{
    int N = 0, Sum = 0;
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int Num = 0;
        std::cin >> Num;
        Sum += Num;
    }
    std::cout << Sum;
    return 0;
}