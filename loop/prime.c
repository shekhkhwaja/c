#include<stdio.h>
#include<stdlib.h>
int main()
{
     int num,i;
     printf("Enter the num=");
     scanf("%d",&num);
     if(num==2)
     {
        printf("It is a prime no");
        exit(0);
     }
     for(i=2;i<num;i++)
     {
        if(num%2==0)
        {
            printf("Not a prime no");
            break;
        }
     }
    if(num==i)
    {
        printf("It is a prime no");
    }
}