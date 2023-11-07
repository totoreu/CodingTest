#include <iostream>

int main()
{
    float A = 0, B = 0;
    std::cin >> A >> B;

    if (A >= B / 2)
        std::cout << "E";
    else
        std::cout << "H";

    return 0;
}