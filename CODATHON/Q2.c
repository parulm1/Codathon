//2.Write a function in C that reverses a given string in-place without using string function.
#include<stdio.h>
#include<string.h>
void rev(int r)
{
    int i,len;
    char str[30],temp;
    printf("Enter the string : ");
    scanf("%s",&str);
    printf("String is %s",str);
    for(i=0;str[i]!='\0';i++)
    {
    }
    printf("\nLength of string : %d",i);
    len=strlen(str)-1;
        for(i=0;i<len-1;i++)
        {
            temp=str[i];
            str[i]=str[len];
            str[len--]=temp;
        }
    printf("\nReverse of string : %s",str);
}
int main()
{
    int R;
    rev(R);
}