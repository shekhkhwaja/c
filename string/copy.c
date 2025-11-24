#include<stdio.h>
#include<string.h>
int main()
{
    char fname[]="Rizwana";
    char lname[20];
    int i;
    i=0;
    while(fname[i]!='\0')
    {
        lname[i]=fname[i];
        i++;
    }
    lname[i]='\0';
    printf("copied string=%s",lname);
    return(0);
}