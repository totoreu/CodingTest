#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;
    std::cin.ignore();

    std::vector<std::string> StrArray(N);
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::getline(std::cin, Str);

        std::stringstream Ss(Str);
        std::string Temp;
        while (Ss >> Temp)
        {
            std::reverse(Temp.begin(), Temp.end());
            StrArray[i] += Temp + " ";
        }
    }

    for (const std::string Str : StrArray)
    {
        std::cout << Str << std::endl;
    }

    return 0;
}