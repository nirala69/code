#include<stdio.h>
void main()
{
    char st[100],c;
    int i =0;
    printf("Enter a string with less than 100 characters\n");
    dos
    { c = getchar();
     st[i]=c;
        i++;
    }while(c!='\n');
    for(int j = 0;j<(i-1);j++)
        printf("%-*.*s\n",(i-1),(j+1),st);
    for(int j = 1;j<(i-1);j++)
        printf("%-*.*s\n",(i-1),(i-1-j),st);

}
