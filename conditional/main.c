#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age = 2;
   int x  ;
  // age >=18 ? printf("you are adult"): printf("you are a minor");
  x = (age >= 18) ? 1 : 0;

   printf("%d ",x);
       getch();
    return 0;
}
