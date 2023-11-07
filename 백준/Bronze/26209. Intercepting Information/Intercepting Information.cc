#include <iostream>

int main()
{
    bool Checker = true;
    for (int i = 0; i < 8; ++i)
    {
        size_t N;
        std::cin >> N;
        if (N == 9)
            Checker = false;
    }
    if (Checker)
        std::cout << "S";
    else
        std::cout << "F";
    
    return 0;
}