#include <stdio.h>

int main()
{
    int i = 20;
    int *j = &i; // j will now store the adress of i
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the adress of i is %u\n", &i);
    printf("the adress of i is %u\n", j);
    printf("the adress of j is %u\n", &j);
    return 0;
}