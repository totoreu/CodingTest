#include <iostream>
#include <string>

const bool FindFive(const std::string& Str)
{
    return Str.find('5') != std::string::npos;
}

const bool FindSix(const std::string& Str)
{
    return Str.find('6') != std::string::npos;
}

const unsigned int TransMinNumber(const std::string& Str)
{
    std::string TransStr;
    for (const char& Ch : Str)
    {
        if(Ch == '6')
            TransStr += '5';
        else
            TransStr += Ch;
    }
    return std::stoi(TransStr);
}

const unsigned int TransMaxNumber(const std::string& Str)
{
    std::string TransStr;
    for (const char& Ch : Str)
    {
        if (Ch == '5')
            TransStr += '6';
        else
            TransStr += Ch;
    }
    return std::stoi(TransStr);
}

int main()
{
    std::string A, B;
    std::cin >> A >> B;

    unsigned int MinA = 0, MaxA = 0;
    unsigned int MinB = 0, MaxB = 0;
    unsigned int NumA = 0, NumB = 0;

    if (FindFive(A) || FindSix(A))
    {
        MinA = TransMinNumber(A);
        MaxA = TransMaxNumber(A);
    }
    else
        NumA = std::stoi(A);

    if(FindFive(B) || FindSix(B))
    {
        MinB = TransMinNumber(B);
        MaxB = TransMaxNumber(B);
    }
    else
        NumB = std::stoi(B);

    unsigned int SumMinNumber = (NumA + MinA) + (NumB + MinB);
    unsigned int SumMaxNumber = (NumA + MaxA) + (NumB + MaxB);

    std::cout << SumMinNumber << " " << SumMaxNumber;

    return 0;
}