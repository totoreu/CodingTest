#include <iostream>

int main()
{
    unsigned int A = 0, B = 0, C = 0;
    while (std::cin >> A >> B >> C)
    {
        size_t Count = 0;
        while (true)
        {
            unsigned int Distance1 = B - A;
            unsigned int Distance2 = C - B;

            if (Distance1 == 1 && Distance2 == 1)
            {
                std::cout << Count << std::endl;
                break;
            }

            if (Distance1 < Distance2)
            {
                A = B;
                B = C - 1;
            }
            else
            {
                C = B;
                B = A + 1;
            }
            Count++;
        }
    }

    return 0;
} 