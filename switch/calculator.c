#include<stdio.h>
int main()
{
    int choice;
    int n1,n2;
    printf("\n1.Sum of two numbers=");
    printf("\n2.Subtract  two numbers=");
    printf("\n3.multiply  of two numbers=");
    printf("\n4.divide of two numbers=");
    printf("\n5.mod of two numbers=");
    printf("\n Enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the numbers=");
        scanf("%d%d",&n1,&n2);
        int sum;
        sum=n1+n2;
        printf("Sum=%d",sum);
        break;
    case 2:
        printf("Enter the numbers=");
        scanf("%d%d",&n1,&n2);
        int sub;
        sub=n1-n2;
        printf("Sub=%d",sub);
        break;
    case 3:
        printf("Enter the numbers=");
        scanf("%d%d",&n1,&n2);
        int mul;
        mul=n1+n2;
        printf("Multiplication=%d",mul);
        break;
    case 4:
        printf("Enter the numbers=");
        scanf("%d%d",&n1,&n2);
        int divide;
        divide=n1+n2;
        printf("divide=%d",divide);
        break;
    case 5:
        printf("Enter the numbers=");
        scanf("%d%d",&n1,&n2);
        int mod;
        mod=n1%n2;
        printf("Mod=%d",mod);
        break;
    default:
    printf("None of a operation");
        break;
    }
};
