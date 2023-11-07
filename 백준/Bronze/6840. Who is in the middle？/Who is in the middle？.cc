#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> Bowls;
    for (size_t i = 0; i < 3; i++)
    {
        int N = 0;
        std::cin >> N;
        Bowls.emplace_back(N);
    }
    std::sort(Bowls.begin(), Bowls.end());
    std::cout << Bowls[1];

    return 0;
}