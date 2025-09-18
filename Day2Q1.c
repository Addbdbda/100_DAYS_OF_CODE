// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    double length,breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf",&breadth);
    printf("Area of rectangle: %lf \n",length*breadth);
    printf("Perimeter of rectangle: %lf \n",2*(length+breadth));
    return 0;
}