#include <stdio.h>
#include <string.h>
struct employe
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employe e1, e2, e3;
    // Detail of first employe
    printf("Enter the value for code for e1 :\n");
    scanf("%d", &e1.code);
    printf("Enter the value for salary for e1 :\n");
    scanf("%f", &e1.salary);
    printf("Enter the value for name for e1 :\n");
    scanf("%s", e1.name);

    // Detail for second employe
    printf("Enter the value for code for e2 :\n");
    scanf("%d", &e2.code);
    printf("Enter the value for salary for e2 :\n");
    scanf("%f", &e2.salary);
    printf("Enter the value for name for e2 :\n");
    scanf("%s", e2.name);

    // Detail for third employe
    printf("Enter the value for code for e3 :\n");
    scanf("%d", &e3.code);
    printf("Enter the value for salary for e3 :\n");
    scanf("%f", &e3.salary);
    printf("Enter the value for name for e3 :\n");
    scanf("%s", e3.name);
    return 0;
}