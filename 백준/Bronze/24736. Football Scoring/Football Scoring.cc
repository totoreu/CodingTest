#include <iostream>
#include <vector>

int main()
{
    std::vector<size_t> Array(2, 0);
    for (int i = 0; i < Array.size(); ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            size_t N = 0;
            std::cin >> N;
            if (j == 0)
                N *= 6;
            if (j == 1)
                N *= 3;
            if (j == 2)
                N *= 2;
            if (j == 3)
                N *= 1;
            if (j == 4)
                N *= 2;

            Array[i] += N;
        }
    }

    std::cout << Array[0] << " " << Array[1];
    
    return 0;
}