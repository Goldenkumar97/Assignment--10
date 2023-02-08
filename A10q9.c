#include <stdio.h>
int xyz(int, int);
int main()
{
    int a, b, c;
    printf("enter a number = ");
    scanf("%d", &a);
    printf("enter a digit(0 - 9) = ");
    scanf("%d", &b);
    c = xyz(a, b);
    if (c == 1)
        printf("%d is present in %d ", b, a);
    else
        printf("%d is NOT present in %d", b, a);
}
int xyz(int x, int y)
{
    int z;
    while (x)
    {
        z = 0;
        z = x % 10;
        if (z == y)
        {
            return 1;
        }
        x = x / 10;
    }
    return 0;
}