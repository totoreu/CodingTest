#include <iostream>
#include <array>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int N = 0;
    std::cin >> N;

    /** N개 크기를 가진 격자에 꽃 종류의 넘버링을 부여 및 최대크기를 컴파일 타임에 알림*/
    std::array<unsigned int, 200000> FlowerArray;

    unsigned int FlowerNum = 0;
    for (size_t i = 0; i < N; i++)
    {
        std::cin >> FlowerNum;
        FlowerArray[i] = FlowerNum;
    }

    unsigned int Q = 0;
    std::cin >> Q;
    std::cin.ignore();

    unsigned int Type = 0, First = 0, Last = 0;
    unsigned int FindType = 0;

    /** 쿼리 타입마다의 행동
    * Type 1 : First ~ Last까지 찾고자 하는 꽃 종류의 갯수 출력
    * Type 2 : First ~ Last까지의 꽃을 밟아 없앰(0으로 초기화)*/
    for (size_t i = 0; i < Q; i++)
    {
        std::cin >> Type >> First >> Last;

        if (Type == 1)
        {
            std::cin >> FindType;

            size_t Count = std::count(FlowerArray.begin() + First - 1, FlowerArray.begin() + Last, FindType);
            std::cout << Count << '\n';
        }
        else if (Type == 2)
        {
            std::fill(FlowerArray.begin() + First - 1, FlowerArray.begin() + Last, 0);
        }
    }

    return 0;
}