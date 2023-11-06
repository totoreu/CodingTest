#include <iostream>

int main() 
{
    int N = 0;
    std::cin >> N;

    int Num[3] = { 0, };
    for (size_t i = 0; i < N; ++i)
    {
        std::cin >> Num[i];
    }
    
    for (size_t i = 0; i < N; ++i)
    {
        std::cout << Num[i] << " " << Num[i] << std::endl;
    }

    return 0;
}