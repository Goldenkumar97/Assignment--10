#include"stdio.h"
void odd(int n);
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    odd(num);
    printf("odd number %d",num);
    return 0;
}
void odd(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
       printf("%d",2*i+1);   
    }
}