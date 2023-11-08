#include <iostream>

int main()
{
    size_t N = 0;
    std::cin >> N;
    
    size_t Sum1 = 0, Sum3 = 0;
    for (size_t i = 1; i <= N; i++)
    {
        Sum1 += i;
        Sum3 += i * i * i;
    }
    size_t Sum2 = Sum1 * Sum1;
    
    printf("%zu\n%zu\n%zu", Sum1, Sum2, Sum3);

    return 0;
}