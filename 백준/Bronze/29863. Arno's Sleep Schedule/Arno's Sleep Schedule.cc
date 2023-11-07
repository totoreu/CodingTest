#include <iostream>

int main()
{
    float A = 0, B = 0;
    std::cin >> A >> B;

    if (A > B)
        B += 24;

    std::cout << B - A;

    return 0;
}