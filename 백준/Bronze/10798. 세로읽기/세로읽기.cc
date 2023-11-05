#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> StrArray;

    int MaxSize = 0;
    for (int i = 0; i < 5; ++i)
    {
        std::string Str;
        std::cin >> Str;

        StrArray.emplace_back(Str);

        if (MaxSize < Str.length())
        {
            MaxSize = Str.length();
        }
    }

    std::string AllWord;
    for(int i = 0; i < MaxSize; ++i)
    { 
        for (int j = 0; j < 5; ++j)
        {
            if (i < StrArray[j].length())
            {
                AllWord += StrArray[j][i];
            }
        }
    }
    
    std::cout << AllWord;

    return 0;
}