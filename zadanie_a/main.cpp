#include <iostream>
#include <cmath>

using namespace std;
int get_sum_divide3(int first, int last)
{
    int temp=0;
    for(;first!=last;first +=3 )
    {
        temp=temp+first;
    }
    return temp;
}

int fibonachi(int times)
{
    int sum = 0;
    int temp = 0;
    int temp1 = 1;
    int temp2 = 0;
    for(int i = 2;i!=times;++i)
    {
        sum += temp2;
        temp2 = temp + temp1;
        //std::cout << temp2 << std:: endl;
        temp = temp1;
        temp1 = temp2;

    }
    return sum+1;
}

int task4(int first, int last)
    {
        int temp = 0;

        for(;first!=last;++first)
        {
            temp=temp+pow(first,first);
            std::cout << temp << std::endl;
        }
        return temp;
    }

int main()
{

    task4(1,5);
    return 0;
}
