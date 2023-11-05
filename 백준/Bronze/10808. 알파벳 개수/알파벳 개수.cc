#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string Str;
    std::cin >> Str;

    std::vector<int> AtoZ(26, 0);
    for (const char& ch : Str)
    {
        AtoZ[ch - 'a']++;
    }
    for (const int& Num : AtoZ)
    {
        std::cout << Num << " ";
    }

    return 0;
}