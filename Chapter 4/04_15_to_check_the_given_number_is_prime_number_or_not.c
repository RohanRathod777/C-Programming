#include <stdio.h>

int main () {
    int n=45,prime =1;
    for (int i = 1; i < n; i++)
    {
       if (n%i==0)
       {
        prime =0;   
        break;
       }
       
    }
    if (prime==0)
    {
        printf("This is not prime number\n");
    }

    else{
        printf("This is prime number\n");
    }
    return 0;
}