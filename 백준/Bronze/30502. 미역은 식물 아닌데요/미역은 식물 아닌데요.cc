#include <iostream>
#include <vector>

struct SPlants
{
    unsigned int Number = 0;
    unsigned int P = 2;
    unsigned int M = 2;
};

int main()
{
    unsigned int N = 0, M = 0;
    std::cin >> N >> M;

    std::vector<SPlants> PlantArray(N);
    for (size_t i = 0; i < N; i++)
    {
        PlantArray[i].Number = i + 1;
    }

    for (size_t i = 0; i < M; i++)
    {
        unsigned int Number = 0;
        char Skill = ' ';
        bool Check = false;
        std::cin >> Number >> Skill >> Check;

        if (Skill == 'P')
            PlantArray[Number - 1].P = Check;
        if(Skill == 'M')
            PlantArray[Number - 1].M = Check;
    }
    
    size_t MinCount = 0 , MaxCount = 0;
    for (const auto& Plant : PlantArray)
    {
        /** 광합성을 하면서 운동능력이 없는*/
        if (Plant.P == 1 && Plant.M == 0)
            MinCount++;
        /** 광합성을 안하면서 운동 능력있는 식물을 제한 나머지*/
        if (Plant.P != 0 && Plant.M != 1)
            MaxCount++;
    }
    
    std::cout << MinCount << " " << MaxCount;

    return 0;
} 