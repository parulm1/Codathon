//10.Write a program to read an integer and print its multiplication table.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter Number : ");
    scanf("%d",&i);
    printf("Table of %d\n",i);
    printf("%d * 1 = %d\n",i,i*1);
    printf("%d * 2 = %d\n",i,i*2);
    printf("%d * 3 = %d\n",i,i*3);
    printf("%d * 4 = %d\n",i,i*4);
    printf("%d * 5 = %d\n",i,i*5);
    printf("%d * 6 = %d\n",i,i*6);
    printf("%d * 7 = %d\n",i,i*7);
    printf("%d * 8 = %d\n",i,i*8);
    printf("%d * 9 = %d\n",i,i*9);
    printf("%d * 10= %d\n",i,i*10);
    return 0;

}