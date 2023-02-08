/*Write a function to calculate to simple interset*/
#include"stdio.h"
float si(float p ,float r,float t);
int main()
{
    float s,m,n,o;
    printf("Enter principal rate and time ");
    scanf("%f %f %f",&m,&n,&o);
    s=si(m,n,o);
    printf("si of %f",s);
    return 0;
}
float si(float p ,float r, float t)
{
float k;
    k=((p*r*t) / 100);
    return k;
}