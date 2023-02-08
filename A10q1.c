//Write a function to calculate the area of a circle (TSRS).
#include"stdio.h"
float area(float a);
int main()
{
    float s,x;
    printf("Enter radius of circle ");
    scanf("%f",&x);
    s=area(x);
    printf("area of circle %f",s);
    return 0;
}
float area (float a )
{
    float b;
    b=(3.14* (a*a));
    return b;
}