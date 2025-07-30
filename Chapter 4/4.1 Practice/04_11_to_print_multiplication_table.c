#include <stdio.h>

int main()
{
    printf("*****multiplication table of 2 is *****\n");
    for (int n = 2; n; n++)
    {
        printf("2x%d=%d\n", n, 2 * n);
        if (n == 10)
        {
            break;
        }
    }

    return 0;
}