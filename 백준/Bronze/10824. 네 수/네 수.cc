#include <iostream>
#include <string>

int main()
{
    std::string A, B, C, D;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    std::cout << stol(A + B) + stol(C + D);

    return 0;
}