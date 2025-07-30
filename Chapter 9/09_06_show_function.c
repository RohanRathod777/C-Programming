#include <stdio.h>
#include <string.h>
struct employe
{
    int code;
    float salary;
    char name[10];
};
void show(struct employe emp)
{
    printf("The code of employe is : %d\n", emp.code);
    printf("The salary of employe is : %f\n", emp.salary);
    printf("The name of employe is : %s\n", emp.name);
}
int main()
{
    struct employe e1;
    struct employe *ptr;
    ptr = &e1;
    // (*ptr).code=101; or you can also write : ptr->code = 101;
    ptr->code = 101;
    ptr->salary = 20.31;
    strcpy(ptr->name, "Rohan");
    show(e1);

    return 0;
}