//6. Write a program to print EVEN numbers from 1 to N using a while loop.

#include<stdio.h>
int main()
{
    int i=1,num;
    printf("Enter number : ");
    scanf("%d",&num);
    while(i<=num)
    {
       
        /* if(num%2==0)
        {
            printf(" %d",num);
        } */
        i++;
        //printf(" %d",i);
    }    
      printf(" %d",num%2);
}
