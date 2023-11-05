#include <iostream>
#include <vector>
#include <string>

int main()
{
    int ChessCount = 0;
    for (int i = 0; i < 8; ++i)
    {
        std::string Str;
        std::cin >> Str;
        
        if (i % 2 == 0)
        {
            for (int j = 0; j < 8; j += 2)
            {
                if (Str[j] == 'F')
                {
                    ChessCount++;
                }
            }
        }
        else
        {
            for (int j = 1; j < 8; j += 2)
            {
                if (Str[j] == 'F')
                {
                    ChessCount++;
                }
            }
        }
    }

    std::cout << ChessCount;

    return 0;
}