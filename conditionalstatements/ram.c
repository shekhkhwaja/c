#include<stdio.h>
int main()
{   
     int ram,shyam,gopal;
    printf("Enter the age of ram= ");
    scanf("%d",&ram);
    printf("Enter the age of shyam=");
    scanf("%d",&shyam);
    printf("Enter the age of gopal=");
    scanf("%d",&gopal);
    if(ram>shyam)
    {
        if(ram>gopal)
        {
            printf("ram is older");

        }
        else
        {
           printf("gopal is old");
        }
    }
    else
    {
        if(shyam>gopal)
        {
            printf("Shyam is old");

        }
        else{
            printf("gopal is old");
        }
    }
}