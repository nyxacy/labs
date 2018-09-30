#ifndef MASSIVE_FUNCTION_H_INCLUDED
#define MASSIVE_FUNCTION_H_INCLUDED
#include <iostream>
/*using BinaryOperation = int(*)(int, int);
int sum(int a, int b)
{
    if(a%2!=0)
    {
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
int accumulate(int* first, int* last, int result,BinaryOperation op )
{
    for(; first!=last; ++first)
    {
        result = op(*first, result);
    }
    return result;
}
*/
void print_array(int* array, int first,int last)
{
    for(;first!=last;++first)
    {
      std::cout<< array[first] << std::endl;
    }
}

void fill_array(int* array,int first, int last)
    {
        int temp = 1;
        for(;first!=last;++first, temp +=2)
        {
            array[first]=temp;
        }
    }











#endif // MASSIVE_FUNCTION_H_INCLUDED
