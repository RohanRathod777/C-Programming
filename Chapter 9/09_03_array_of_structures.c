#include <stdio.h>
#include <string.h>
struct employe 
{
    int code;
    float salary;
    char name[10];
};

int main()
{   struct employe facebook[100];
    facebook[0].code =100;
    facebook[0].salary =100.45;
    strcpy(facebook[0].name,"ROHAN");

    facebook[1].code =101;
    facebook[1].salary =90.45;
    strcpy(facebook[1].name,"HARRY");

    facebook[3].code =103;
    facebook[3].salary =101.45;
    strcpy(facebook[3].name,"SKILL KHILADI");
return 0;
}