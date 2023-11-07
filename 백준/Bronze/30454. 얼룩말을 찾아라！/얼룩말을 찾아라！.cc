#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

const int LineCounting(const std::string& Str)
{
    bool Checker = false;
    size_t Count = 0;
    for (size_t i = 0; i < Str.length(); i++)
    {
        if (Str[i] == '1' && Checker)
        {
            continue;
        }
        if (Str[i] == '1' && !Checker)
        {
            Count++;
            Checker = true;
        }
        else
            Checker = false;
    }
    return Count;
}

int main()
{
    size_t N = 0, L = 0;
    std::cin >> N >> L;

    std::vector<size_t> CountArray;
    for (size_t i = 0; i < N; i++)
    {
        std::string Str;
        std::cin >> Str;

        CountArray.emplace_back(LineCounting(Str));
    }
    size_t Max = *std::max_element(CountArray.begin(), CountArray.end());
    size_t Count = std::count(CountArray.begin(), CountArray.end(), Max);
    
    std::cout << Max << " " << Count;

    return 0;
}