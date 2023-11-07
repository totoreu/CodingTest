#include <iostream>
#include <vector>

int main()
{
    size_t N = 0;
    std::cin >> N;

    std::vector<double> Array;
    for (int i = 0; i < N; ++i)
    {
        double Dog = 0, Food = 0, Price = 0;
        std::cin >> Dog >> Food >> Price;

        Array.emplace_back(Dog * Food * Price);
    }

    for (const double& Elem : Array)
    {
        printf("$%.2lf\n", Elem);
    }
    
    return 0;
}