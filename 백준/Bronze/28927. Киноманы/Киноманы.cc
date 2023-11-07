#include <iostream>

int main()
{
    size_t T1 = 0, E1 = 0, F1 = 0;
    std::cin >> T1 >> E1 >> F1;

    size_t T2 = 0, E2 = 0, F2 = 0;
    std::cin >> T2 >> E2 >> F2;

    T1 *= 3; T2 *= 3;
    E1 *= 20; E2 *= 20;
    F1 *= 120; F2 *= 120;

    if (T1 + E1 + F1 > T2 + E2 + F2)
        std::cout << "Max";
    if (T1 + E1 + F1 < T2 + E2 + F2)
        std::cout << "Mel";
    if (T1 + E1 + F1 == T2 + E2 + F2)
        std::cout << "Draw";

    return 0;
}