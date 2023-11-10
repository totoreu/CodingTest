#include <iostream>
#include <vector>

int main()
{
    unsigned int BasketNum = 0, N = 0;
    std::cin >> BasketNum >> N;

    std::vector<unsigned int> BasketArray(BasketNum, 0);
    for (size_t i = 0; i < N; i++)
    {
        unsigned int First = 0, Last = 0, BallNumber = 0;
        std::cin >> First >> Last >> BallNumber;

        for (size_t j = First - 1; j < Last; j++)
        {
            BasketArray[j] = BallNumber;
        }
    }

    for (const unsigned int& Elem : BasketArray)
    {
        std::cout << Elem << " ";
    }
  
    return 0;
} 