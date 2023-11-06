#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Button
{
public:
    Button(unsigned int InTime) : Time(InTime) {}

    inline const unsigned int GetTime() const { return Time; }

private:
    unsigned int Time = 0;
};

const int IsGreedy(const unsigned int& Button, unsigned int& Time, size_t& Count)
{
    if (Time < Button || Time == 0)
    {
        return Count;
    }
    return IsGreedy(Button, Time -= Button, ++Count);
}

int main() 
{
    unsigned int Time = 0;
    std::cin >> Time;

    std::vector<Button*> ButtonArray = {
        new Button(360),
        new Button(60),
        new Button(10),
    };

    std::vector<int> NumArray;
    for (const auto& Button : ButtonArray)
    {
        size_t Count = 0;
        int Value = IsGreedy(Button->GetTime(), Time, Count);
        NumArray.emplace_back(Value);
    }

    if (Time != 0)
    {
        std::cout << -1;
        return 0;
    }
    else
    {
        for (const int& Num : NumArray)
        {
            std::cout << Num << " ";
        }
    }
    return 0;
}
