#include<stdio.h>
// printing first n odd natural numbers
void odd(int x)
{
    for(int i=1;i<=x;i++)
    printf("%d ",2*i-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("First %d odd natural numbers are : ",x);
    odd(x);
    return 0;
}