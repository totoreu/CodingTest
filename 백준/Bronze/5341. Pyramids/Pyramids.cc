#include <iostream>

int main()
{
    while (true)
    {
        size_t N = 0;
        std::cin >> N;

        if (N == 0)
            break;

        size_t Sum = 0;
        for (int i = N; i > 0; --i)
        {
            Sum += i;
        }

        std::cout << Sum << std::endl;
    }

    return 0;
}