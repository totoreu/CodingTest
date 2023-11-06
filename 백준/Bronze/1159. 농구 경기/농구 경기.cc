#include <iostream>
#include <string>
#include <map>

int main()
{
    size_t N = 0;
    std::cin >> N;

    std::map<char, size_t> Firstname;
    for (size_t i = 0; i < N; i++)
    {
        std::string Str;
        std::cin >> Str;
        
        auto FindIt = Firstname.find(Str.front());
        if (FindIt != Firstname.end())
        {
            FindIt->second++;
        }
        else
        {
            Firstname.emplace(Str.front(), 1);
        }
    }

    bool Checker = false;
    for (const auto& Elem : Firstname)
    {
        if (Elem.second >= 5)
        {
            std::cout << Elem.first;
            Checker = true;
        }
    }
    
    if (!Checker)
    {
        std::cout << "PREDAJA";
    }
    
    return 0;
}