#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;
    std::vector<std::string> StrArray;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;

        StrArray.emplace_back(Str);
    }

    for (int i = 0; i < N; ++i)
    {
        for (char& Ch : StrArray[i])
        {
            if (Ch < 'Z')
            {
                Ch++;
            }
            else
            {
                Ch = 'A';
            }
        }
        std::cout << "String #" << std::to_string(i + 1) << "\n" << StrArray[i] << "\n\n";
    }

    return 0;
}