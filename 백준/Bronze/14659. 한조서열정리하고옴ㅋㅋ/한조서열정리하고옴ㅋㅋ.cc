#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    unsigned int TopLate = 0;
    size_t Count = 0, MaxCount = 0;
    for (size_t i = 0; i < N; ++i)
    {
        unsigned int Peak = 0;
        std::cin >> Peak;

        if (TopLate < Peak)
        {
            TopLate = Peak;
            Count = 0;
        }
        else
            Count++;
        if (MaxCount < Count)
            MaxCount = Count;
    }

    std::cout << MaxCount;

    return 0;
}