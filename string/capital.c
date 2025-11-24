#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="nidhi";
    int i=0;
    while(name[i]!='\0')
    {
        name[i]=name[i]-32;
        i++;
    }
    printf("\n Calculate the string length=%s",name);
    return(0);
}