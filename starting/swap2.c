#include<stdio.h>
int main()
{  
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    a=a+b;      /* a=10+20 a=30
                   b=30-20 b=10
                      */
    b=a-b;
    a=a-b;
    printf("After swapping the values are a=%d and b=%d",a,b);
}
