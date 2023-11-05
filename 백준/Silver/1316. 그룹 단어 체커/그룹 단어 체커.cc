#include <iostream>
#include <string>

const bool Checker(const std::string& Str)
{
    std::string StrTemp;
    char ChTemp = Str.front();
    for (const char& Ch : Str)
    {
        if (ChTemp == Ch)
        {
            continue;
        }

        auto FindIt = find(StrTemp.begin(), StrTemp.end(), Ch);
        if (FindIt == StrTemp.end())
        {
            if (ChTemp != Ch)
            {
                StrTemp += ChTemp;
                ChTemp = Ch;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N = 0;
    std::cin >> N;

    int Count = 0;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;

        if (Checker(Str))
        {
            Count++;
        }
    }

    std::cout << Count;

    return 0;
}