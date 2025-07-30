#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Come to my room";
    encrypt(c);
    printf("Encrypted String is : %s", c);
    return 0;
}