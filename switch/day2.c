#include<stdio.h>
int main()
{   
    char day;
    printf("Enter the day=");
    scanf("%c",&day);
    switch (day)
    {
    case 'A':
    case 'a':
         printf("Monday");
        break;
    case 'B':
    case 'b':
         printf("Tuesday");
        break;
    case 'C':
    case 'c':
         printf("Wednesday");
        break;
    case 'D':
    case 'd':
         printf("Thursday");
        break;
    case 'E':
    case 'e':
        printf("Friday");
        break;
    case 'F':
    case 'f':
         printf("Saturday");
        break;
    case 'G':
    case 'g':
         printf("Sunday");
        break;
    default:
        printf("None of a day");
        break;
    }
}