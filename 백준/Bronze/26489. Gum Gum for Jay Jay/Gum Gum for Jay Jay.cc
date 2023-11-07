#include <iostream>
#include <string>

int main()
{
    std::string Str;
    size_t Count = 0;
    while (std::getline(std::cin, Str))
    {
        Count++;
    }

    std::cout << Count;
    
    return 0;
}