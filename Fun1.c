#include <stdio.h>
/*Trying to make a simple function to add numbers*/
void main()
{
    int a , b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    Sum(a , b);
}
void Sum(int num1 , int num2)
{
    int s;
    s = num1+ num2 ; 
    printf("The sum of given numbers is: %d", s);
}