#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float per;
    printf("Enter the marks of Hindi=");
    scanf("%d",&s1);
    printf("Enter the marks of Maths=");
    scanf("%d",&s2);
    printf("Enter the marks of English=");
    scanf("%d",&s3);
    printf("Enter the marks of Social science=");
    scanf("%d",&s4);
    printf("Enter the marks of Science=");
    scanf("%d",&s5);
    if(s1<33 || s2<33 || s3<33 || s4<33 || s5<33)
    {
        printf("first clear your back");
    }
    else
    {
    total=s1+s2+s3+s4+s5;
    per=(float)total/5;
    if(per>=60 && per<=100)
    printf("First division per=%f",per);
    else if(per>=45 && per<=60)
    printf("Second division per=%f",per);
    else if(per>=30 && per<=45)
    printf("Third division per=%f",per);
    else
    printf("fail!!!");
    return(0);
    }
}