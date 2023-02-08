/*  Write a function to calculate the number of arrangements 
one can make from n items and r selected at a time.*/
#include"stdio.h"
int per (int n,int r);
int main()
{
    int s,x,y;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    s=per(x,y);
    printf("perumation of %d",s);
    return 0;
}
int per (int n, int r)
{
    int c,facto=1;
    c=(facto*n/facto*r);
    return c;
}