#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float average;
    average=0;
    printf("Enter the value of maths=");
    scanf("%d",&s1);
    printf("Enter the value of english=");
    scanf("%d",&s2);
    printf("Enter the value of science=");
    scanf("%d",&s3);
    printf("Enter the value of social science=");
    scanf("%d",&s4);
    printf("Enter the value of hindi=");
    scanf("%d",&s5);
    average=(s1+s2+s3+s4+s5/5.0);
    printf("Average=%f",average);
    
}
