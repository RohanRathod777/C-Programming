#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
                }
        ptr++;
    }

    return count;
}
int main()
{
    char st[] = "Rohan";
    int count = occurence(st, 'h');
    printf("Occurence = %d", count);
    return 0;
}