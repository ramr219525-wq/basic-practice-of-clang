#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("enter a,enter b,");
    scanf("%f%f",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("Addition: %f\nSubtraction: %f\nMultiplication: %f\nDivision: %f",c,d,e,f);
    return 0;   
}