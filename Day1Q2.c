// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    double a,b;
    printf("ENTER NUMBER A: ");
    scanf("%lf",&a);
    printf("ENTER NUMBER B: ");
    scanf("%lf",&b);
    printf("SUM : %lf \n",a+b);
    printf("DIFFERENCE : %lf \n",a-b);
    printf("PRODUCT : %lf \n",a*b);
    b != 0 ? printf("QUOTIENT : %lf \n",a/b) : printf("QUOTIENT : NOT DEFINED \n");
    
    return 0;
}
