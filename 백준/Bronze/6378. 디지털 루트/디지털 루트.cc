#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string Number;
        std::cin >> Number;

        if (Number == "0")
        {
            break;
        }

        while (true)
        {
            if (Number.length() == 1)
            {
                std::cout << Number << std::endl;
                break;
            }

            int Num = 0;
            for (const char& Ch : Number)
            {
                Num += Ch - '0';
            }
            Number = std::to_string(Num);
        }
    }

    return 0;
}