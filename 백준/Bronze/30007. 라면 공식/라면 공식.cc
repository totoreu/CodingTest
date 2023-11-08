#include <iostream>

int main()
{
    size_t N;
    std::cin >> N;

    for (size_t i = 0; i < N; i++)
    {
        size_t A = 0, B = 0, X = 0;
        std::cin >> A >> B >> X;

        std::cout << (A * (X - 1) + B) << std::endl;
    }

    return 0;
}