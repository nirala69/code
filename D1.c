#include<stdio.h>
int main()
{
float pay;
int i=1,h;
while(i<=10)
{
printf("enter the no of hours worked");
scanf("%d",&h);
if(h>=40)
{
pay=(h-40)*12;
printf("hoursis%d\n and pay is %f\n",h,pay);
}
else
{
pay=0;
printf("no of hours work is less than 40 and overtime pay is zero");
}

}
}
