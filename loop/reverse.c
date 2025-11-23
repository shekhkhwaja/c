#include<stdio.h>
int main()
{
    int num;
    int rem;
    printf("Enter the number=");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }
}