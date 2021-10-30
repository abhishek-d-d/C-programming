// C Program to Add Two Integers
#include<stdio.h>
#include<conio.h>

int main()
{
    int c,a,b;
    printf("\n Program to add two integers \n");
    printf("\n Enter the first integer.  :  ");
    scanf("%d",&a);
    printf("\n Enter the second integer.  :  ");
    scanf("%d",&b);
    c=a+b;
    printf("\n The addition of %d and %d is %d .",a,b,c);
    getch();
    return 0;

}
