#include<stdio.h>
int main()
{
    int choice;
     int trainno;
     int pnr;
    printf("\nWelcome to IRCTC!!");
    printf("\n1.Train Enquiry=");
    printf("\n2.PNR status");
    printf("\nEnter your choice=");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        
        printf("Enter the Train No=");
        scanf("%d",&trainno);
        switch (trainno)
        {
        case 12345:
           printf("JBP to uttarakhand dayodaya express will arrive at pltfrm no 5");
            break;
        case 12245:
           printf("JBP to ranchi dangra express will arrive at pltfrm no 4");
            break;
        case 12445:
           printf("JBP to manali lullpoo express will arrive at pltfrm no 1");
            break;
        case 12545:
           printf("JBP to belbagh lakadganj express will arrive at pltfrm no 2");
            break;
        case 12845:
           printf("JBP to barela stan express will arrive at pltfrm no 3");
            break;
        default:
         printf("Wrong Input!!");
         break;
        
        break; // bug door nhi hua hai iska abhi bhii
        }
     case 2:
        printf("\n Enter the Pnr No=");
        scanf("%d",&pnr);
        switch (pnr)
        {
        case 9926:
           printf("RAC");
            break;
        case 12245:
           printf("WL");
            break;
        case 12445:
           printf("CNF B5,36");
            break;
        case 12545:
           printf("CNF B6,37");
            break;
        case 12845:
           printf("WL");
            break;
    default:
    printf("Wrong Input!!!");
        break;
    }
}
}