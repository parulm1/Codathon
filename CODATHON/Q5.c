//5. Write a program to print weekday of given date.
#include<stdio.h>
int main()
{
    int date,day;
    
    printf("Enter the Date :");
    scanf("%d",&date);

    day=date%7;

    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thuresday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
}