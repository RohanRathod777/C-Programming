#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");

    scanf("%d\n", &a);

    while (a < 50)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}