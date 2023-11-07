#include <iostream>

int main() 
{
    int N = 0, Sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> N;
        Sum += N;
    }
    std::cout << Sum;

    return 0;
}