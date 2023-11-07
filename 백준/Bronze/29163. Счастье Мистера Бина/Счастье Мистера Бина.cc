#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    int Happy = 0;
    for (int i = 0; i < N; ++i)
    {
        int Num = 0;
        std::cin >> Num;
        if (Num % 2 == 0)
            Happy++;
    }
    
    if (Happy > (N / 2))
        std::cout << "Happy";
    else
        std::cout << "Sad";

    return 0;

}