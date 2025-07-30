#include <stdio.h>
int swap(int *a, int *b);
// int worng_swap(int a, int b);
int main()
{
    int x = 2, y = 3;
    printf("the value of x and y before swap %d is %d \n", x, y);

    // worng_swap(x, y); // will not work due to call by value
    swap(&x, &y); // will work due to call by reference

    printf("the value of x and y after swap %d is %d\n", x, y);
    return 0;
}
// int worng_swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}