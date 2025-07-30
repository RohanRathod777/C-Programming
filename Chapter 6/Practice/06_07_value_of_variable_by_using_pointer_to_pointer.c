#include <stdio.h>

int main()
{
    int i = 50;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    printf("the value of variable i is %d\n", **ptr_ptr);
    return 0;
}