#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[7] = {3,8,7,6,4,1,5};
   int sum = 0,i;

    for(i= 0; i<7;i++)
    {  if(a[i]%2 ==0)
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}
