#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<unsigned int> vNum(3);
    for (size_t i = 0; i < 3; i++)
    {
        std::cin >> vNum[i];
    }
    std::sort(vNum.begin(), vNum.end());
    std::cout << vNum[1];
    return 0;
}