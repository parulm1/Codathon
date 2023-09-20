//20.Write a program to perform the concept of call by value fibonacci series 
#include<stdio.h>
void febo(int a)
{
    int i,no;
    int t1=1,t2=1;
    int nextterm=t1+t2;
    //printf("Enter the no. of terms : ");
    //scanf("%d",&no);
    printf("Febonacci Series : %d,%d,",t1,t2);
    for (i = 3; i <=no; i++)
    {
        printf("%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
}
int main()
{
    febo(6);
}