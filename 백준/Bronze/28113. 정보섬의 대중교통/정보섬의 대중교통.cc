#include <iostream>

int main()
{
    unsigned int N = 0, A = 0, B = 0;
    std::cin >> N >> A >> B;

    if (A < B)
        std::cout << "Bus";
    if (A > B)
        std::cout << "Subway";
    if (A == B)
        std::cout << "Anything";

    return 0;
}