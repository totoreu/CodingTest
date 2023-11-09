#include <iostream>
#include <string>

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    std::string Str;
    std::cin >> Str;

    std::string Temp;
    for (size_t i = 0; i < N; ++i)
    {
        Temp += Str[i];
        if (Str[i] == 'L')
            ++i;
    }

    if (Str.find("LL") != std::string::npos)
        std::cout << Temp.length() + 1;
    else
        std::cout << Temp.length();

    return 0;
}