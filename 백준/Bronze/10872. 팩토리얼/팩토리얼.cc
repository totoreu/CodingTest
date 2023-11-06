#include <iostream>

int main() 
{
    int N = 0;
    std::cin >> N;
    
    int Sum = 1;
    for (int i = 1; i <= N; ++i)
    {
        Sum *= i;
    }
    std::cout << Sum;
    return 0;
}