#include <stdio.h>

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d\n", &num);
    if (num == 1)
    {
        printf("the number is 1\n");
    }
    else if (num == 2)
    {
        printf("the number is 2\n");
    }
    else if (num == 3)
    {
        printf("the number is 3\n");
    }
    else
    {
        printf("its not 1,2,or 3\n");
    }

    return 0;
}