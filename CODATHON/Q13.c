/* 13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle. */
#include<stdio.h>

int main()
{
    int calculate;
    printf("Enter the no. : \n 11 Area of circle \n 22 Area of rectangle \n 33 Area of square \n 44 Area of triangle\n");
    scanf("%d",&calculate);
    int r,l,b,s,w,h;
    float pi=3.14;
    switch(calculate)
    {
        case 11:
            
            printf("Enter radius : ");
            scanf("%d",&r);
            printf("Area of circle = %.2f\n",pi*r*r);
            break;
        case 22:
            
            printf("Enter length and breadth : ");
            scanf("%d%d",&l,&b);
            printf("Area of rectangle = %d\n",l*b);
            break;
        case 33:
            
            printf("Enter the side : ");
            scanf("%d",&s);
            printf("Area of square = %d\n",s*s);
            break;
        case 44:
            
            printf("Enter length and breadth : ");
            scanf("%d%d",&w,&h);
            printf("Area of triangle = %.2f\n",(float)1/2*w*h);
            break;
    }
}