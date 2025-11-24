#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="nidhi";
    int len=0;
    int i=0;
    while(name[i]!='\0')
    {
          len++;
        i++;
    }
    printf("\n Calculate the string length=%d",len);
    return(0);
}