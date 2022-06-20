#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =3; int z;

    z = fact(x);
    printf("the factorial of x is %d",z);

}

 fact(x)

{  int i,f;
    for(i=1;i<=x;i++)
    {
        f = f*i;
        i++;
        return f;
    }
}
