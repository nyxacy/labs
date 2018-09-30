#include <iostream>

using namespace std;
template<typename T>
T sum(T a,T b)
{
    return a+b;
}

int main()
{
    int result = sum<int>(2,7);
    double result1 = sum<double>(2.2,7.9);
    std::cout << result << std::endl;
    std::cout << result1 << std::endl;
    return 0;
}
