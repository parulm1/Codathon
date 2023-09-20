//11.Write a program to Calculate Product of Digits of a Number.
#include<stdio.h>
int main()
{
    int d1,d2,d3,d4,num,prod;
    printf("Enter a 4 digit no. : ");
    scanf("%d",&num);
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d4=num;
    prod=d1*d2*d3*d4;
    printf("The product of individual digit of a 4 digit number is %d",prod);
}