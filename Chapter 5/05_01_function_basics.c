#include <stdio.h>
void display(); // Function Prototype
int main()
{
    int a;
    printf("Initializing display function \n");
    display(); // Function Call
    printf("display function finish its work\n");
    return 0;
}
// Function Definition
void display()
{
    printf("This is display\n");
}