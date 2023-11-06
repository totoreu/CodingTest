#include <iostream>

inline const long long AtSign(const long long& A, const long long& B)
{
    return (A + B) * (A - B);
}

int main() 
{
    long long A = 0, B = 0;
    std::cin >> A >> B;
    std::cout << AtSign(A, B);

    return 0;
}