#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age <= 70 && age >= 18)
    {
        printf("you are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("you can not drive\n");
    }

    return 0;
}