#include <iostream>

int main() 
{
    size_t UR = 0, TR = 0, UO = 0, TO = 0;
    std::cin >> UR >> TR >> UO >> TO;
    std::cout << (UR * 56) + (TR * 24) + (UO * 14) + (TO * 6);
    return 0;
}