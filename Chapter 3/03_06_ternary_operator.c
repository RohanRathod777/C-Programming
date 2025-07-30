#include <stdio.h>

int main () {
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    (age<18)? printf("teenager"):printf("adult");
    return 0;
}