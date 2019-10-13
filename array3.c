#include<stdio.h>
int main()
{
   int i,a[10],b,c;
   printf("enter 10 integers\n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<=9;i+=2)
   {
       b=a[i];
       c=a[i+1];
       a[i]=c;
       a[i+1]=b;
   }
   for(i=0;i<=9;i++)
   {
       printf("%d\n",a[i]);
   }
   return 0;


}
