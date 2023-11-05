#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const std::vector<std::string> Croatia{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

const bool Checker(std::string& Str)
{
    for (const std::string& Alphabet : Croatia)
    {
        size_t FindIt = Str.find(Alphabet);
        if (FindIt != std::string::npos)
        {
            Str.replace(FindIt, Alphabet.length(), Alphabet.length(),'.');
            return true;
        }
    }
    return false;
}

int main()
{
    std::string Str;
    std::cin >> Str;

    int Count = 0;
    while (Checker(Str)) 
    {
        Count++;
    }

    int Size = std::count_if(Str.begin(), Str.end(), 
        [](const int x) 
        {
            return x != '.'; 
        }
    );

    std::cout << Count + Size;

    return 0;
}