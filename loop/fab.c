#include<stdio.h>
int main()
{
    int i;
    int a=-1,b=1,c;
    for(i=1;i<12;i++)
    {
        c=a+b;
        printf("%d   ",c);
        a=b;
        b=c;
    }
}