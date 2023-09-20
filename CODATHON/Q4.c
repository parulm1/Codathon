//4. Write a program to compare two no by using the ternary operator in c.
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    (n1>n2) ? printf("%d is greater than %d",n1,n2) : printf("%d is greater than %d",n2,n1);
}