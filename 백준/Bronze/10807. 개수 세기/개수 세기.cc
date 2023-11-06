#include <iostream>
#include <vector>

int main() 
{
    int N = 0;
    std::cin >> N;

    std::vector<int> Numbers;
    for (int i = 0; i < N; ++i)
    {
        int Num = 0;
        std::cin >> Num;
        Numbers.emplace_back(Num);
    }

    int Num = 0;
    std::cin >> Num;

    int Sum = 0;
    for (const int& Ch : Numbers)
    {
        Sum += (Num == Ch) ? 1 : 0;
    }
    std::cout << Sum;

    return 0;
}