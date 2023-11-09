#include <iostream>

int main()
{
    unsigned int L = 0, P = 0, V = 0;
    size_t Index = 1;
    while (true)
    {
        std::cin >> L >> P >> V;

        if (!V) 
            break;

        unsigned int Sum = (V / P) * L;
        unsigned int Mod = V % P;
        Sum += std::min(Mod, L);
        
        printf("Case %zu: %u\n", Index++, Sum);
    }

    return 0;
}