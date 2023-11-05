#include <iostream>
#include <string>
#include <vector>

bool InRange(int Size)
{
    return Size >= 6 && Size <= 9;
}

int main()
{
    int N = 0;
    std::cin >> N;

    std::vector<std::string> StrArray;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;
        StrArray.emplace_back(Str);
    }

    std::vector<std::string> AnswerArray(N, "yes");
    int Index = 0;
    for (const std::string& Str : StrArray)
    {
        if (!InRange(Str.length()))
        {
            AnswerArray[Index] = "no";
        }
        Index++;
    }

    for (const std::string& Str : AnswerArray)
    {
        std::cout << Str << std::endl;
    }
    return 0;
}