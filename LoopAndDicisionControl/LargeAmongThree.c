//  C Program to Find the Largest Number Among Three Numbers

#include<stdio.h>

int main()
{
    float a,b,c;
    printf("\n  Enter Three numbers to compare. ");
    printf("\n  Number_1 = ");
    scanf("%f",&a);
    printf("\n  Number_2 = ");
    scanf("%f",&b);
    printf("\n  Number_3 = ");
    scanf("%f",&c);
    if(a > b)
        {
            if(a > c)
                printf("\n  %f is greater.",a);
        }
    else
        {
            if(b > c)
                printf("\n  %f is greater.",b);
            else
                printf("\n  %f is greater.",c);    
        }
    return(0);
}
