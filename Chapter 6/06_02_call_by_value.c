#include <stdio.h>
int sum(int x, int y);
int main()
{
    int x = 2, y = 2;
    printf("the sum of x + y is %d\n", x, y);
    printf("the value of 2 + 2 is %d\n", sum(x, y));
    printf("the value of x + y after call function is %d\n", x, y);
    return 0;
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    x = 20;
    y = 20;
    return z;
}