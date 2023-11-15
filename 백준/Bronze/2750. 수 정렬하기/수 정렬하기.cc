#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    std::vector<int> NumArray;
    for (size_t i = 0; i < N; ++i)
    {
        int Input = 0;
        std::cin >> Input;

        NumArray.emplace_back(Input);
    }
    std::sort(NumArray.begin(), NumArray.end());

    for (const int& Elem : NumArray)
    {
        std::cout << Elem << std::endl;
    }

    return 0;
}