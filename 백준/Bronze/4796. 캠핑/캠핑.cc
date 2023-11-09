#include <iostream>

int main()
{
    size_t Index = 1;
    while (true)
    {
        unsigned int L = 0, P = 0, V = 0;
        std::cin >> L >> P >> V;

        if (V == 0)
            break;

        unsigned int Sum = (V / P) * L;

        unsigned int Mod = 0;
        Mod = V % P;

        if (Mod <= L)
            Sum += Mod;
        else
            Sum += L;
        
        printf("Case %zu: %u\n", Index++, Sum);
    }

    return 0;
}