#include<stdio.h>
#include<string.h>
int main()
{
    char ac_name[30];
    char dc_name[30];
    printf("Enter the string=");
    gets(ac_name);
    strcpy(dc_name,ac_name);

    strrev(ac_name);
    if((strcmp(ac_name,dc_name))==0)
    {
        printf("palindrom ");
    }
    else{
        printf("not a palindrom");
    }
}