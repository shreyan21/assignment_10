#include<stdio.h>
int factorial(int n)
{   
    if(n==0)
    return 1;
    int i=1;
    int fact=n;
    while(i<=n-2)
    {
        fact*=n-i;
        i++;
    }
    return fact;
}
int combinations(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r))  ;
}
int main()
{
     int n,r;
     scanf("%d%d",&n,&r);
     printf("Number of combinations from %d items selected %d at a time are %d\n",n,r,combinations(n,r));
     return 0;
}