#include <iostream>
#include <string>

int main()
{
    unsigned int N = 0;
    std::cin >> N;
    std::cin.ignore();

    std::string Str;
    std::getline(std::cin, Str);
    Str.erase(std::remove(Str.begin(), Str.end(), ' '), Str.end());

    std::string Milk;
    for (size_t i = 0; i < (Str.length() / 3) + 1; ++i)
    {
        Milk += "012";
    }
    
    size_t Index = 0;
    for (size_t i = 0; i < Str.length(); i++)
    {
        if (Str[i] == Milk[Index])
            Index++;
    }

    std::cout << Index;

    return 0;
}