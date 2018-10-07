#include <iostream>
#include <cmath>
void fill_array (int* array, int size , int a, int d)
{
    array[0]=a;
    array[1]=a+d;
    for (int i= 2 ; i<size ; ++i)
    {
        array[i]=a+(i*d);
    }

}
void print_array(int* array, int size_)
{
    for(int i = 0; i <size_; ++i)
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{

    int array[7]{};
    fill_array(array,6,1,1);
    print_array(array,6);



    return 0;
}
