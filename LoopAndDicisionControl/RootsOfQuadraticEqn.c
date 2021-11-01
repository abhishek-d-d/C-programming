//  C Program to Find the Roots of a Quadratic Equation

#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imgpart;
    printf("\n  Enter coeficient a(non zero) , b, c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("\n  Your quadratic equation is : %.2lfa^2 + %.2lfb + %.2lf = 0 ",a,b,c);

    discriminant = b*b - (4*a*c);

    if(discriminant > 0)
    {
        root1 = - b + sqrt(discriminant);
        root2 = - b - sqrt(discriminant);
        printf("\n  Roots of given quadratic equation is %lf and %lf .",root2,root1);

    }
    else if (discriminant = 0)
    {
        root1 = root2 = -b/(2*a);
        printf("\n  Roots of given quadratic equation is %lf and %lf .",root2,root1);
    }
    else
    {
        realpart = -b/(2*a);
        imgpart = sqrt(-discriminant)/(2*a);
        printf("\n  The roots of given quadratic equation is Root_1 = %lf + %lfi and Root_2 = %lf - %lfi .",realpart,imgpart,realpart,imgpart);
    }
    
    return(0);

}
