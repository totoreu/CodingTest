#include <iostream>
#include <string>

int main()
{
    std::string MyMBTI;
    std::cin >> MyMBTI;

    int N = 0;
    std::cin >> N;

    int Count = 0;
    for (int i = 0; i < N; ++i)
    {
        std::string FriendMBTI;
        std::cin >> FriendMBTI;
        if (MyMBTI == FriendMBTI)
        {
            Count++;
        }
    }

    std::cout << Count;
    
    return 0;
}