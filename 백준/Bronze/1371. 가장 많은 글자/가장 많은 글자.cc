#include <iostream>
#include <string>
#include <map>
#include <algorithm>

std::map<char, int> Alphabet{
    {'a',0}, {'b',0}, {'c',0}, {'d',0}, {'e',0}, {'f',0}, {'g',0}, {'h',0}, {'i',0}, {'j',0}, {'k',0}, {'l',0}, {'m',0},
    {'n',0}, {'o',0}, {'p',0}, {'q',0}, {'r',0}, {'s',0}, {'t',0}, {'u',0}, {'v',0}, {'w',0}, {'x',0}, {'y',0}, {'z',0}
};

int main()
{
    std::string Str;
    while (std::getline(std::cin, Str))
    {
        for (const char& ch : Str)
        {
            auto FindIt = Alphabet.find(ch);
            if (FindIt != Alphabet.end())
            {
                FindIt->second++;
            }
        }
    }

    auto FindMaxValue = std::max_element(Alphabet.begin(), Alphabet.end(),
        [](const auto& x, const auto& y)
        {
            return x.second < y.second;
        }
    );

    for (const auto& Elem : Alphabet)
    {
        if (FindMaxValue->second == Elem.second)
        {
            std::cout << Elem.first;
        }
    }

    return 0;
}