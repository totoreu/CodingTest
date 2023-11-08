#include <iostream>

int main()
{
    unsigned int N = 0, M = 0;
        std::cin >> N >> M;

    if ((N * 100) >= M)
        std::cout << "Yes";
    else
        std::cout << "No";


    return 0;
}