#include <iostream>
#include <vector>

int main()
{
    unsigned int BasketNum = 0, N = 0;
    std::cin >> BasketNum >> N;

    std::vector<unsigned int> BasketArray;
    for (size_t i = 1; i <= BasketNum; i++)
    {
        BasketArray.emplace_back(i);
    }

    for (size_t i = 0; i < N; i++)
    {
        unsigned int First = 0, Second = 0;
        std::cin >> First >> Second;

        std::swap(BasketArray[First - 1], BasketArray[Second - 1]);
    }

    for (const unsigned int& Elem : BasketArray)
    {
        std::cout << Elem << " ";
    }
  
    return 0;
} 