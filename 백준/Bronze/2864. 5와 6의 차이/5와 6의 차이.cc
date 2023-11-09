#include <iostream>
#include <string>

/** Ch : '5' 또는 '6' 입력*/
const bool FindNumber(const std::string& Str, char Ch)
{
    return Str.find(Ch) != std::string::npos;
}

/* 문자열을 변환하여 최소 값과 최대 값을 반환하는 함수
* MinValue 반환 : Input  = "Min"
* MaxValue 반환 : Input  = "Max" */
const unsigned int TransNumber(const std::string& Str, std::string Input)
{
    char Ch1 = ' ', Ch2 = ' ';
    if (Input == "Min")
    {
        Ch1 = '6'; 
        Ch2 = '5';
    }
    if (Input == "Max")
    {
        Ch1 = '5';
        Ch2 = '6';
    }

    std::string TransStr;
    for (const char& Ch : Str)
    {
        if(Ch == Ch1)
            TransStr += Ch2;
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

    if (FindNumber(A, '5') || FindNumber(A, '6'))
    {
        MinA = TransNumber(A, "Min");
        MaxA = TransNumber(A, "Max");
    }
    else
        NumA = std::stoi(A);

    if (FindNumber(B, '5') || FindNumber(B, '6'))
    {
        MinB = TransNumber(B, "Min");
        MaxB = TransNumber(B, "Max");
    }
    else
        NumB = std::stoi(B);

    unsigned int SumMinNumber = (NumA + MinA) + (NumB + MinB);
    unsigned int SumMaxNumber = (NumA + MaxA) + (NumB + MaxB);

    std::cout << SumMinNumber << " " << SumMaxNumber;

    return 0;
}
