#include <iostream>
#include <string>
#include <vector>

const bool UpperChecker(const char& ch)
{
    return ch >= 'A' && ch <= 'Z';
}

const bool LowerChecker(const char& ch)
{
    return ch >= 'a' && ch <= 'z';
}

const bool NumberChecker(const char& ch)
{
    return ch >= '0' && ch <= '9';
}

const bool SpaceChecker(const char& ch)
{
    return ch == ' ';
}

const std::string DataString(const std::string& Str)
{
    size_t Lower = 0, Upper = 0, Number = 0, Space = 0;
    for (const char& Ch : Str)
    {
        if (LowerChecker(Ch))
            Lower++;
        else if (UpperChecker(Ch))
            Upper++;
        else if (NumberChecker(Ch))
            Number++;
        else if (SpaceChecker(Ch))
            Space++;
    }

    return std::to_string(Lower) + " " + std::to_string(Upper) + " " + std::to_string(Number) + " " + std::to_string(Space);
}

int main()
{
    std::vector<std::string> ValuesArray;
    std::string Str;
    while(std::getline(std::cin, Str))
    {
        ValuesArray.emplace_back(Str);
    }

    for (const std::string& Values : ValuesArray)
    {
        std::cout << DataString(Values) << std::endl;
    }

    return 0;
}