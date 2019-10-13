#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,f=1,a;

    printf("enter num\n");
    scanf("%d",&a);
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf ("\nthe factorial is %d",f);
    return 0;
}
