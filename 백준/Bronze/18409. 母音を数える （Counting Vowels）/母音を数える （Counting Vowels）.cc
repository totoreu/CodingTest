#include <iostream>
#include <vector>

const std::vector<char> Mo{ 'a','i','u','e','o' };
int main()
{
    size_t N = 0;
    std::cin >> N;
    std::string Str;
    std::cin >> Str;

    size_t Count = 0;
    for (const char& Ch : Str)
    {
        for (const char& C : Mo)
        {
            if (Ch == C)
            {
                Count++;
                break;
            }
        }
    }

    std::cout << Count;

    return 0;
}