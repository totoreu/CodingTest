#include <iostream>

int main()
{
    size_t N = 0;
    std::cin >> N;

    for (size_t i = 0; i < N; i++)
    {
        long A = 0, B = 0;
        std::cin >> A >> B;
        std::cout << A + B << std::endl;
    }

    return 0;
}