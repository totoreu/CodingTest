#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;

    int Line = 0;
    for (int i = 0; i < N; ++i)
    {
        int Button = 0;
        std::cin >> Button;
        Line += Button;
    }

    if (Line < 0)
        std::cout << "Left";
    if(Line == 0)
        std::cout << "Stay";
    if(Line > 0)
        std::cout << "Right";

    return 0;
}