#include <iostream>

int main() 
{
    int H = 0, I = 0, A = 0, R = 0, C = 0;
    std::cin >> H >> I >> A >> R >> C;
    std::cout << (H * I) - (A * R * C);
    return 0;
}