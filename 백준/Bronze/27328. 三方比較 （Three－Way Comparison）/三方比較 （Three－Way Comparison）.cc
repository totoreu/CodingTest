#include <iostream>

int main()
{
    size_t A = 0, B = 0;
    std::cin >> A >> B;

    if (A > B)
        std::cout << 1;
    if (A < B)
        std::cout << -1;
    if (A == B)
        std::cout << 0;

    return 0;
}