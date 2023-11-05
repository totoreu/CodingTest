#include <iostream>
#include <string>

int main()
{
    std::string Num1, Sign, Num2;
    std::cin >> Num1;
    std::cin >> Sign;
    std::cin >> Num2;

    if (Sign == "+")
    {
        int SizeNum1 = Num1.length();
        int SizeNum2 = Num2.length();
        if (Num1.length() < Num2.length())
        {
            Num2[SizeNum2 - SizeNum1] = '1';
            std::cout << Num2;
        }
        else if (Num1.length() > Num2.length())
        {
            Num1[SizeNum1 - SizeNum2] = '1';
            std::cout << Num1;
        }
        else
        {
            Num1[0]++;
            std::cout << Num1;
        }

    }
    if (Sign == "*")
    {
        Num2.erase(0, 1);
        std::cout << Num1 + Num2;
    }

    return 0;
}