#include <iostream>
#include <string>
#include <vector>

int main()
{
    int T = 0;
    std::cin >> T;

    std::vector<std::string> StrArray;
    for (int i = 0; i < T; ++i)
    {
        std::string Str;
        std::cin >> Str;
        StrArray.emplace_back(Str);
    }

    std::vector<std::vector<int>> AlphabetArray(T,std::vector<int>(26,0));

    for(int i = 0; i < T; ++i)
    {
        for(int j = 0; j < StrArray[i].length(); ++j)
        {
            AlphabetArray[i][StrArray[i][j] - 'A']++;
        }
    }

    std::vector<int> SumArray(T,0);
    for (int i = 0; i < T; ++i)
    {
        for (int j = 0; j < AlphabetArray[i].size(); ++j)
        {
            if (!AlphabetArray[i][j])
            {
                SumArray[i] += j + 'A';
            }
        }
    }

    for (const int& Sum : SumArray)
    {
        std::cout << Sum << std::endl;;
    }

    return 0;
}