#include <iostream>

int main()
{
    unsigned int N = 0;
    std::cin >> N;

    if (620 <= N && N <= 780)
        std::cout << "Red";
    if( 590<=N && N <620)
        std::cout << "Orange";
    if( 570<=N && N <590)
        std::cout << "Yellow";
    if( 495<=N && N <570)
        std::cout << "Green";
    if( 450<=N && N <495)
        std::cout << "Blue";
    if( 425<=N && N <450)
        std::cout << "Indigo";
    if( 380<=N && N <425)
        std::cout << "Violet";

    return 0;
}