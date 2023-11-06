#include <iostream>

int main() 
{
    int N = 0, Sum = 0;
    for (int i = 0; i < 6; ++i)
    {
        std::cin >> N;
        Sum += N;
    }
    std::cout << Sum * 5;
    return 0;
}