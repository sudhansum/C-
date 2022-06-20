#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[6] = {7,3,9,18,13,11};
     int i, large;

     large = a[0];

     for(i =1;i<6;i++)
     {
         if(a[i]>large)
         {
            large = a[i];
         }
     }

}
