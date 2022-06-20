#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int i;

    printf ("enter 5 elements into the array");

      for(i=0;i<5;i++)
      {
          scanf("%d " ,&a[i]);
      }
       printf(" display array \n");

         for( i=0;i<5;i++)
         {
              printf("%d\n", a[i]);
         }
    return 0;
}
