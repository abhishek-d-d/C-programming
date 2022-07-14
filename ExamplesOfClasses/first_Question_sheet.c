/*
// ARITHMETIC OPERATOR CODE-M.B.S 
// NOTE :- This sheet is only for students practice purpose , any sharing / edit / rendering in this sheet will be considered as a copyright claim . All need to submit the sheets within the given deadline . 
// ARITHMETIC OPERATOR 
// 1.WAP to read two numbers and print sum of that nos. 
// 2.WAP to read two numbers P and Q subtract and print 
// subtraction into third variable total. 
// 3.Program to read 2 no’s and print their multiplication 
// 4.Program to read marks for 5 subjects and find total marks. 
// 5.WAP to read length & breadth of Rectangle and find its area 
// and perimeter • A=L*B • P=2*(L+B) 
// 6.WAP to read radius of circle and find its area and 
// circumference. A=3.14* r*r C=2*3.14*r 
// 7.WAP to read radius of sphere and find its Volume V= 4/3 
// 3 
// 8.WAP to read value of x and calculate value of y for given exp 

// 9.WAP to read value of x& y and calculate result of given exp 

// 10. WAP to read temp in Fahrenheit and convert it into 
// degree Celsius C 

*/




#include <stdio.h>

int main()
{
    printf("Question 1 : reading and adding those two numbers\n enter two nombers to add and substract\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("a = %d and b = %d ",a,b);
    
    int c = a + b;
    
    printf("sum of %d and %d is %d \n\n\n",a,b,c);
    
    
    printf("Question 2 : reading and Substracting those two number\n Enter two numbers to substract \n");
    int p,q,r;
    scanf("%d",&p);
    scanf("%d",&q);
    
    r = p - q;
    printf("Substraction of two numbers %d and %d is %d \n\n\n",p,q,r);
    
    printf("Question 3 : reading and multiplying those two number\n Enter two numbers to multiply \n");
    
    int a1,b1;
    scanf("%d",&a1);
    scanf("%d",&b1);
    printf("Multiplication %d\n\n\n",a1*b1);
    
    printf("Question 4\n");
    
    printf("Enter marks of five subjects \n");
    int a4,b4,c4,d4,e4,f4;
    scanf("%d",&a4);
    scanf("%d",&b4);
    scanf("%d",&c4);
    scanf("%d",&d4);
    scanf("%d",&e4);
    
    int r4 = a4 + b4 + c4 + d4 +e4;
    printf("Total marks = %d\n\n\n",r4);
    
    printf("Question 5\n");
    
    printf("Enter Length and breadth :\n");
    int a5,b5;
    scanf("%d",&a5);
    scanf("%d",&b5);
    int per = 2 * (a5 + b5);
    int area = a5 * b5;
    printf("Per = %d and area = %d \n\n\n", per, area);
    
    printf("Question 6 :\n enter r \n");
    int r6;
    float area6;
    float c6;
    scanf("%d",&r6);
    c6 = 2 * 3.14 * r6;
    area6 = 3.14 * r6 * r6;
    printf("area = %f and cir = %f \n\n\n",area6,c6);
    
    printf("Question 7 : \n Enter r of sphere\n");
    int r7;
    float v7;
    scanf("%d",&r7);
    v7 = (4.0 / 3.0) * 3.14 * r7 *r7 *r7;
    printf("Vol = %f\n\n\n",v7);
    
    
    printf("question 8 :\n enter x \n");
    int x8;
    float y8;
    scanf("%d",&x8);
    
    y8 = ((3.0 / 7.0) * x8 * x8 * x8) - ( (4.0/5.0) * x8 * x8 ) + 100;
    printf("Y = %f \n\n\n",y8);
    
    
    printf("Question 9 : \n enter x and y\n");
    int x9 , y9 ;
    float z9;
    scanf("%d",&x9);
    scanf("%d",&y9);
    z9 = ((x9 + y9) * (x9 + y9)) / (x9 - y9);
    printf("Z = %f\n\n\n",z9);
    
    
    printf("Question 10 : \n Enter temp in far \n");
    float temp_f, temp_d;
    scanf("%f",&temp_f);
    temp_d = (5.0 / 9.0) * (temp_f - 32);
    printf("%f far = %f degree cel \n\n\n", temp_f, temp_d);
    
    
    return 0;
}
