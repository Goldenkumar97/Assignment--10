 /*Write a function to calculate the number of 
 combinations one can make from n items and r selected at a time.*/
 #include"stdio.h"
 int comb(int n , int r);
 int main()
 {
    int s,x,y;
    printf("Enter two number n and r");
    scanf("%d%d",&x,&y);
    s=comb(x,y);
    printf("combinations of %d",s);
    return 0;
 }

 int comb(int n , int r)
 {
    int c,facto=1;
    c=(facto*n/facto*r*facto*n-r);
    return c;
 }
 