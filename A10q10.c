/*Write a function to print all the prime number for example 
,if the number is 36 then your result should be 2,2,3,3 (TSRS)*/
#include"stdio.h"
void primefact(int);
void primefact(int n)
{
    int i;
    for(i = 2; n != 1; i++)
    {
        while(n%i ==0)
        {
        n = n/i;
        printf("%d ,",i);
        }
    }
}
int main()
{
    
    primefact(36);
    return 0;
}