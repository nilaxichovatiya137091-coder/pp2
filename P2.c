//find out area of circle using pointer and function
#include <stdio.h>
void calculateArea(float r, float *a)
{
    *a = 3.14159 * r * r;
}
int main()
{
    float radius = 5.0, area;
    calculateArea(radius, &area);
    printf("Area: %.2f", area);
    return 0;
}
