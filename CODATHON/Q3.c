//3. Write a program to Print Prime Numbers between Two numbers.
#include<stdio.h>
int main()
{
    int no,i,j=0;
    printf("Enter a no. :");
    scanf("%d",&no);

    for ( i = 1; i <= no ; i++)
    {
        if (no%i==0)
        j++;
    }
     if (j==2)
        printf("%d is a PRIME no.",no);
    else
        printf("%d is not a PRIME no.",no); 
} 