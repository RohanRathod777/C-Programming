#include <stdio.h>
#include <string.h>
int main()
{
    char st1[45]= "HELLO";
    char *st2 = "ROHAN";
    int val = strcmp(st1, st2);
    printf("now the val is %d", val);
    return 0;
}