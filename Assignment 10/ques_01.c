// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h> 

float area_circle(float);

int main()
{
    float radius;
    printf("Enter radius of the circle:\t");
    scanf("%f", &radius);

    area_circle(radius);

    printf("Area of circle having radius %.2f is %.2f", radius, area_circle(radius));
    
    return 0;
}
float area_circle(float rad)
{
    return 3.14 * rad * rad;
}