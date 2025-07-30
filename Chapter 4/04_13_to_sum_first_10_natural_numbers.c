    // Using for loop

// #include <stdio.h>

// int main()
// { 
    // int i, sum = 0, n = 10;
    // for (i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
//  printf("The value of sum (1-10) is %d", sum);
//     return 0;
// }

   
    // Using while loop
    #include <stdio.h>

int main()
{
    int i = 1, sum = 0, n = 10;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The value of sum (1-10) is %d", sum);
    return 0;
}