#include<stdio.h>
#include<string.h>
int main()
{
    char khwaja[30]="shekh khwaja is very handsome";
    char name[30];
    strcpy(name,khwaja); // phele jismein copy krna hai phir jis se copy krna hai 
    printf("After copying print str=%s and name=%s",name,khwaja);
}