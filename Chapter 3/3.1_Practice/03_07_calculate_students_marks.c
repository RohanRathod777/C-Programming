#include <stdio.h>

int main()
{
    int Physics, Chemistry, Math;
    float total;
    printf("enter Physics marks\n");
    scanf("%d", &Physics);

    printf("enter Chemistry marks\n");
    scanf("%d", &Chemistry);

    printf("enter Math marks\n");
    scanf("%d", &Math);

    total = (Physics + Chemistry + Math)/3;
    if ((total <40) || Physics <33 || Chemistry <33 || Math <33)
    {
        printf("your total percentage is %f and you are fail\n",total);
    }
    else
    {
        printf("your total percentage is %f and you are pass\n",total);
    }
    return 0;
}