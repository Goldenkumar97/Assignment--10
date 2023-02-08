/*  Write a function to calculate the factorial of a number.(TSRS)*/
#include"stdio.h"
int factorial (int );
int main()
{
    int s,x;
    printf("Enter a number ");
    scanf("%d",&x);
    s=factorial(x);
    printf("factorial of %d ",s);
    return 0;
}
int factorial(int num)
{

    int count,facto=1;
    for(count=1;count<=num ;count++)
    facto=count*facto;
    return facto;
    
}