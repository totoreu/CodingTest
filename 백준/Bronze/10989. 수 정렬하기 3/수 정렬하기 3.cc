#include <iostream>
#include <vector>

#define MAXINDEX 10001

int main()
{
    int N = 0;
    std::cin >> N;

    std::vector<int> NumArray(MAXINDEX, 0);
    for (int i = 0; i < N; i++)
    {
        int Index = 0;
        scanf("%d", &Index);
        NumArray[Index]++;
    }

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < NumArray[i]; j++)
            printf("%d\n", i);

    return 0;
}