//  C Program to Check Whether a Number is Even or Odd

#include<stdio.h>
int main()
{
    int a;
    printf("\n  Enter a number to be checked : ");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n  Your number %d is Even",a);
    else
        printf("\n  Your number %d is odd",a);
    
    return(0);
}
