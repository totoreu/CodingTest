#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int Num = 0;
    std::cin >> Num;
    std::vector<std::string> StrArray(Num);
    for (string& Str : StrArray)
    {
        std::cin >> Str;
    }
    for (const string& Str : StrArray)
    {
        std::cout << Str.front() << Str.back() << std::endl;
    }

    return 0;
}