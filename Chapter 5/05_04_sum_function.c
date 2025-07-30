#include <stdio.h>
// Sum is function which takes a and b as inpute and returns an integer as an output

int sum(int a, int b); // Function prototype declaration

int main()
{
    int result;
    result = sum(2, 5); // Function call
    printf("The sum is %d\n", result);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}