#include <iostream>

int main()
{
    unsigned int E = 0, S = 0, M = 0;
    std::cin >> E >> S >> M;

    size_t Count = 0;
    size_t Ee = 0, Ss = 0, Mm = 0;
    while (true)
    {
        if (Ee == E && Ss == S && Mm == M)
            break;
        Ee = Ee < 15 ? Ee + 1 : 1;
        Ss = Ss < 28 ? Ss + 1 : 1;
        Mm = Mm < 19 ? Mm + 1 : 1;
        Count++;
    }
    std::cout << Count;
    return 0;
} 