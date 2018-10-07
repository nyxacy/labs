#include <iostream>
using UnaryOperation = void(*)(int);

enum Direction {Stright, Reverse};


void print_even(int value)
{
    if(value%2==0)
    {
        std::cout << value << std::endl;
    }
}

void print_not_even(int value)
{
    if(value%2!=0)
    {
        std::cout << value << std::endl;
    }
}

void for_each_(int* first,int* last, UnaryOperation p)
{
    for(; first!= last; ++first)
    {
        p(*first);
    }
}

void r_for_each_(int* first,int* last, UnaryOperation p)
{
    for(; first!= last; --first)
    {
        p(*first);
    }
}

void array9(int* first, int* last,UnaryOperation p, Direction d )
{
    if(d==Direction::Stright)
    {
        for_each_(first,last,p);
    }
    else
    {
        r_for_each_(first,last,p);
    }
}

void array10(int* first,int* last,UnaryOperation p,UnaryOperation p1)
{
 array9(first,last,p,Direction::Stright);
 array9(last-1,first-1,p1,Direction::Reverse);
}

void array11(int* first, int* last,int k)
{
    for(int i = 1;first!=last;first=first+k*i,++i)
    {
        std::cout << *first << std::endl;
    }
}

int main()
{
    int array[10] {1,2,3,4,5,6,7,8,9,10};
    //array9(array,array+10,print_even,Direction::Stright);
    //array10(array,array+10,print_even,print_not_even);
    array11(array,array+10,1);
    return 0;
}
