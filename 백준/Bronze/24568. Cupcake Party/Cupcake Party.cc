#include <iostream>

int main()
{
    size_t R = 0, S = 0;
    std::cin >> R >> S;

    R *= 8;
    S *= 3;
    size_t CupCake = (R + S) - 28;
    std::cout << CupCake;
    
    return 0;
}