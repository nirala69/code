#include<stdio.h>
int main()
{
    int a[10],i,b=0,c=0,d=0,e=0;
    printf("enter the numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    if(a[i]%2==0)
        b++;
    else
        c++;
    if(a[i]>0)
        d++;
    else
        e++;
    }
    printf("positive=%d\n negative=%d\n even=%d\n odd=%d\n",d,e,b,c);
return 0;
}
