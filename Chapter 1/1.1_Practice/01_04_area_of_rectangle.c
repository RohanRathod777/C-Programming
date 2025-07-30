

                             // BY USING HARD CODED METHOD//

/*#include <stdio.h>

int main () {
  int length=4, breadth=4;

  int area=length*breadth;

  printf("The area of rectangle is %d",area);


    return 0;
}*/


                       // USING INPUTS SUPPLIED BY THE USERS//

#include <stdio.h>

int main () {
    int length;
    int breadth;
    printf("What is the length of rectangle \n");

    scanf("%d",&length);
    
      printf("What is the breadth of rectangle \n");

    scanf("%d",&breadth);

    printf("The area of rectangle is %d",length*breadth);
      
    return 0;
}