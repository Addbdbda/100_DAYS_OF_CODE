// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    printf("Area of circle: %lf \n",(3.14159*radius*radius));
    printf("Circumference of the circle: %lf \n",(2*3.14159*radius));
    return 0;

}
