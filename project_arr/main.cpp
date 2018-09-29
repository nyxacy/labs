#include <iostream>
int sum(int a, int b)
{
    if(a%2!=0){
    return a+b;
    }
    return b;
}
int mul(int a, int b)
{
    if(a%2==0)
    {
    return a*b;
    }
    return b;
}
using namespace std;
using BinaryOperation = int(*)(int, int);
int accumulate(int* first, int* last, int result,BinaryOperation op )
{
    for(;first!=last;++first)
    {
        result = op(*first, result);
    }
    return result;
}
int main()
{
    int array[7]{7,8,6,1,2,4,9};
    int result = accumulate(array,array+7,1,sum);
    std::cout << result << std::endl;
    return 0;
}
