#include <iostream>
#include <string>
#include <vector>

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

    std::string StrCommand;
    for (int i = 0; i < StrArray[0].length(); ++i) // 가로
    {
        int SameCount = 0;
        for (int j = 0; j < N; ++j)
        {
            if (StrArray[0][i] == StrArray[j][i])
            {
                SameCount++;
            }
            if (SameCount == N)
            {
                StrCommand += StrArray[0][i];
            }
        }
        if(SameCount != N)
        {
            StrCommand += "?";
        }
    }

    std::cout << StrCommand;

    return 0;
}