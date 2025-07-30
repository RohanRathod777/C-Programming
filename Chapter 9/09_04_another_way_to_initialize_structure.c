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
    struct employe Rohan = {100, 30.40, "Rohan"};

    printf("code is : %d \n", Rohan.code);
    printf("salary is : %f \n", Rohan.salary);
    printf("name is : %d \n", Rohan.name);

    return 0;
}