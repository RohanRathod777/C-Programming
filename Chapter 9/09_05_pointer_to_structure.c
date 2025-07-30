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
    struct employe e1;
    struct employe *ptr;
    ptr = &e1;
    // (*ptr).code=101; or you can also write : ptr->code = 101;
    ptr->code = 101;
    printf("%d", e1.code);

    return 0;
}