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
int main()
{
    int n;
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,factorial(n));
    return 0;
}