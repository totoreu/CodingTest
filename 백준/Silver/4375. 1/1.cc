#include <iostream>

int main()
{
    unsigned int N = 0;
    while (std::cin >> N)
    {
        unsigned int Num = 1;
        for (int i = 1;; ++i)
        {
            if (Num % N == 0)
            {
                std::cout << i << std::endl;
                break;
            }
            else
            {
                Num = (Num * 10) + 1;
                Num %= N;
            }
        }
    }

    return 0;
}