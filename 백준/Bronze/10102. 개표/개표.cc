#include <iostream>
#include <string>
#include <vector>

const std::vector<char> Gathers{ 
    'a', 'e', 'i', 'o', 'u'
};

int main()
{
    int Num = 0;
    std::cin >> Num;
    std::string Str;
    std::cin >> Str;

    int A = 0, B = 0;
    for (const char& ch : Str)
    {
        if (ch == 'A')
        {
            A++;
        }
        if (ch == 'B')
        {
            B++;
        }
    }
    if (A > B)
    {
        std::cout << "A";
    }
    if (A < B)
    {
        std::cout << "B";
    }
    if (A == B)
    {
        std::cout << "Tie";
    }
        
    return 0;
}