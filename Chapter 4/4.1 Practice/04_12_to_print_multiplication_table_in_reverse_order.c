#include <stdio.h>

int main () {
    printf("*****multiplication table of 10 is *****\n");
    for (int i = 10; i; i--)
    {
        printf("10x%d=%d\n",i,10*i);
    }
    
    return 0;
}