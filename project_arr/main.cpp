#include <iostream>
#include "massive_function.h"
using namespace std;

int main()
{
    int array[10]{1,9,59,4465,54,4,1,7,8,9};

    fill_array(array,0,10);
    print_array(array,0,10);












    //int array[7] {7,8,6,1,2,4,9};
    //int result = accumulate(array,array+7,0,sum);
    //std::cout << result << std::endl;

    return 0;
}
