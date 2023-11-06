#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string Num1, Num2;
    std::cin >> Num1 >> Num2;

    std::vector<int> Num1Array, Num2Array;
    for (size_t i = 0; i < Num1.length(); i++)
    {
        Num1Array.emplace_back(Num1[i] - '0');
    }
    for (size_t i = 0; i < Num2.length(); i++)
    {
        Num2Array.emplace_back(Num2[i] - '0');
    }
    
    size_t Sum = 0;
    for (const int& Num1 : Num1Array)
    {
        for (const int& Num2 : Num2Array)
        {
            Sum += Num1 * Num2;
        }
    }

    std::cout << Sum;

    return 0;
}