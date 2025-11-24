#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    char ch;
    int i,j,len;
    printf("\n Enter String=");
    gets(name);
    len=strlen(name);

    for(i=0,j=len-1;i<len/2;i++,j--) // bhai ismein ek doubt hai solve krna hai usko
    {
        ch=name[i];
        name[i]=name[j];
        name[j]=ch;

    }
    printf("Reveresed string=%s",name);
}