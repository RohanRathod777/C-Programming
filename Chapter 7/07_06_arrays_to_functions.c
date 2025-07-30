#include <stdio.h>
void PrintArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element is %d\n", i + 1, (*ptr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    PrintArray(arr, 7);
    return 0;
}