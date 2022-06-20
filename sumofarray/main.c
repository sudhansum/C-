#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[6] = {3,7,8,11,1,6};
     int sum = 0, i ,j;

     for( i =0;i<6;i++)
     {
         sum = sum + a[i];
     }
      printf("sum of elements in an array = %d", sum);
    return 0;
}
