#include<stdio.h>
#include<string.h>
int main()
{
    char name[30]="shekh khwaja is ";
    char fname[30]="very smarty";
    strcat(name,fname); // phele jismein  krna hai phir jo krna hai add
    printf("after concatinating=%s",name);
    return(0);
}