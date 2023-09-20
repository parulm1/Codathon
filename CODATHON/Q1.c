//1. Write a program to find the cube of a number use loop.
#include<stdio.h>
int main()
{
    int c,i,num;
    printf("Enter a no. to print its cube : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        c=num*num*num;
    }
    printf("Cube of %d = %d",num,c);
}