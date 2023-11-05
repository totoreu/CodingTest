#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;
    std::vector<std::string> MirrorArray;
    for (int i = 0; i < N; ++i)
    {
        std::string Str;
        std::cin >> Str;
        MirrorArray.emplace_back(Str);
    }
    int MirrorState = 0;
    std::cin >> MirrorState;

    if (MirrorState == 1)
    {
        for (const std::string& Str : MirrorArray)
        {
            std::cout << Str << std::endl;
        }
    }
    if (MirrorState == 2)
    {
        for (std::string& Str : MirrorArray)
        {
            std::reverse(Str.begin(), Str.end());
            std::cout << Str << std::endl;
        }
    }
    if (MirrorState == 3)
    {
        for (int i = N - 1; i >= 0; --i)
        {
            std::cout << MirrorArray[i] << std::endl;
        }
    }
    

    return 0;
}