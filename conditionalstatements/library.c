#include<stdio.h>
int main()
{ 
    int ldays;
    float fine;
    printf("Enter the No of late days=");
    scanf("%d",&ldays);
    if(ldays>=1 && ldays<=5)
    {
        fine=ldays*0.5;
        printf("Your fine is=%f",fine);
    }
    else if(ldays>=6 && ldays<=10)
    {
        ldays=ldays-5;
        fine=2.5+ldays*1;
        printf("Your fine is=%f",fine);
    }
    else if(ldays>=11 && ldays<=30)
    {
        ldays=ldays-10;
        fine=2.5+5+ldays*5;
        printf("your fine is=%f",fine);
    }
    else{
        printf("Your fine is=%f and your membership has been closed",fine);
    }
}