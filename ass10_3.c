#include<stdio.h>
int isEven(int x)
{
    if(x%2)
    return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isEven(n))
    printf("%d is even number\n",n);
    else
    printf("%d is odd number\n",n);
    return 0;
}