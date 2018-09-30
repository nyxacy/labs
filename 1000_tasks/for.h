#ifndef FOR_H_INCLUDED
#define FOR_H_INCLUDED
#include <cmath>

int get_sum_powers5(int first, int last)
{
    int temp=0;
    for(;first<last;++first)
    {
        temp=(temp+(int)std::pow(5,first));
        std::cout << temp << std::endl;
    }
        return temp;
}
#endif // FOR_H_INCLUDED
