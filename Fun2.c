#include <stdio.h>
#include <math.h>
double square(double num)
{
    double s;
    s = pow(num , 2);
    return s;
}
void main()
{
    double a ,b;
    printf("Enter any number:");
    scanf("%lf", &a);
    b = square(a);
    printf("Square of the number is : %f",b);
}