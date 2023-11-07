#include <iostream>

int main()
{
    size_t N = 0;
    std::cin >> N;

    size_t I = N % 5;
    size_t V = N / 5;

    for (int i = 0; i < V; ++i)
        std::cout << "V";
    for (int i = 0; i < I; ++i)
        std::cout << "I";
    
    return 0;
}