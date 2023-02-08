#include"stdio.h"
void printnatural( int num);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printnatural(n);
    printf(" natural number ", n );
    return 0;
}
void printnatural( int num)
{
    int i;
    for(i=1;i<=num;i++)
    printf("%d", i );
 
}