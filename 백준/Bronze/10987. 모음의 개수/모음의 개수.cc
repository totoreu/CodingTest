#include <iostream>
#include <string>
#include <vector>

const std::vector<char> Gathers{ 
    'a', 'e', 'i', 'o', 'u'
};

int main()
{
    std::string Str;
    std::cin >> Str;

    int Count = 0;
    for (const char& Ch : Str)
    {

        for (const char& Gather : Gathers)
        {
            if (Ch == Gather)
            {
                Count++;
            }
        }
    }
    std::cout << Count;

    return 0;
}