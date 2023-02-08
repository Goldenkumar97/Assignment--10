/*Write a function to check whether a given number is even or odd return 1
if the number is even otherwise return 0 (TSRS)*/
#include"stdio.h"
int number (int n);
int main()
{
    int s,x;
    printf("Enter a number ");
    scanf("%d",&x);
    s=number(x);
    printf(" return  %d",s);
    return 0;
}
int number (int n )
{
    
    if(n % 2 == 0)
    return 1;
    else
    return 0;
    return n;
}
