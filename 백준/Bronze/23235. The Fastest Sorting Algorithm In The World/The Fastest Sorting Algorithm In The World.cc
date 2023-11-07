#include <iostream>
#include <string>

int main()
{
    std::string Str;
    size_t Count = 0;
    while (true)
    {
        std::getline(std::cin, Str);
        if (Str == "0")
            break;
        Count++;
    }
    for (int i = 1; i <= Count; ++i)
    {
        printf("Case %d: Sorting... done!\n", i);
    }

    return 0;
}