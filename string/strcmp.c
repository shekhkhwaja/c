#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="hello";
    char fname[]="Hello";
    char lname[]="hello";
    if((strcmp(name,lname))==0)
       printf("\n Both string are equal");
    else
       printf("\n Not equal");

}