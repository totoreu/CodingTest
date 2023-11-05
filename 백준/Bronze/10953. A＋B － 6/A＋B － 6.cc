#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Num = 0;
    std::cin >> Num;

    std::vector<std::string> StrArray(Num);
    for (std::string& Str : StrArray)
    {
        std::cin >> Str;
    }
    for (const std::string& Str : StrArray)
    {
        int First = Str.front() - '0';
        int Second = Str.back() - '0';
        std::cout << First + Second << std::endl;
    }

    return 0;
}