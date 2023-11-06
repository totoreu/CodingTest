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

const std::string ApplyROT13(const std::string& Str)
{
    std::string StrRot;
    for (const char& Ch : Str)
    {
        if (LowerChecker(Ch))
        {
            char C = Ch - 13;
            if (C < 'a')
                C += 26;
            StrRot += C;
        }
        else if (UpperChecker(Ch))
        {
            char C = Ch - 13;
            if (C < 'A')
                C += 26;
            StrRot += C;
        }
        else
        {
            StrRot += Ch;
        }
    }

    return StrRot;
}

int main()
{
    std::string Str;
    std::getline(std::cin, Str);
    
    std::cout << ApplyROT13(Str);
    
    return 0;
}