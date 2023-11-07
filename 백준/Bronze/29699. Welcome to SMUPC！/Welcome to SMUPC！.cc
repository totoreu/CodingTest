#include <iostream>
#include <string>

int main()
{
    std::string Str = "WelcomeToSMUPC";

    int N = 0;
    std::cin >> N;

    if(N % 14 == 0)
        N = 14;
    if (N > 14)
        N %= 14;

    std::cout << Str[N - 1];

    return 0;

}