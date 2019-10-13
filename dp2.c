#include<stdio.h>
int main()
{
int a[5],i,n,x;
printf("enter 5 numbers");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

printf("enter a number");
scanf("%d",&n);
for(i=0;i<=4;i++)
{


    if(n==a[i])
            {
            printf("present");
            break;
            }

    else
            {
            printf("not present");
            break;
            }
}
x=0;
while(i<=4)
{
    if(n==a[i])
        x++;
        i++;
}
printf("%d\n",x);
     return 0;
}
