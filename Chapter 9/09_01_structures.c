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
    int a = 34;
    char c = 'g';
    float b = 34.453;

    struct employe e1;

    e1.code = 100;
    e1.salary = 34.453;
    strcpy(e1.name, "ROHAN");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}