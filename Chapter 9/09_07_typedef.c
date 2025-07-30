#include <stdio.h>
#include <string.h>
typedef struct employe
{
    int code;
    float salary;
    char name[10];
} emp;
void show(struct employe emp1)
{
    printf("The code of employe is : %d\n", emp1.code);
    printf("The salary of employe is : %f\n", emp1.salary);
    printf("The name of employe is : %s\n", emp1.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    // (*ptr).code=101; or you can also write : ptr->code = 101;
    ptr->code = 101;
    ptr->salary = 20.31;
    strcpy(ptr->name, "Rohan");
    show(e1);

    return 0;
}