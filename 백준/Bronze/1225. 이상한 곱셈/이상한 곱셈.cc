#include <iostream>
#include <string>

size_t Sum(std::string Str)
{
    size_t Sum = 0;
    for (const char& Ch : Str)
    {
        Sum += Ch - '0';
    }
    return Sum;
}

int main() {
    std::string Num1, Num2;
    std::cin >> Num1 >> Num2;

    size_t Sum1 = Sum(Num1);
    size_t Sum2 = Sum(Num2);

    std::cout << Sum1 * Sum2;

    return 0;
}