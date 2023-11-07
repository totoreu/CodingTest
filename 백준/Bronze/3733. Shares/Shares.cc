#include <iostream>

int main()
{
    size_t N = 0, S = 0;
    while (std::cin >> N >> S)
    {
        std::cout << S / (N + 1) << std::endl;
    }

    return 0;
}