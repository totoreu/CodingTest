#include <iostream>

int main()
{
    size_t Price = 0, Perfomance = 0, WARBOYPrice = 0;
    std::cin >> Price >> Perfomance >> WARBOYPrice;

    size_t Competition = Perfomance / Price;
    size_t WARBOYPerfomance = Competition * 3 * WARBOYPrice;

    std::cout << WARBOYPerfomance;
    
    return 0;
}