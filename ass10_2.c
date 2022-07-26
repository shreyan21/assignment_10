#include<stdio.h>
float simple_interest(int p,int r,int t)
{
    return p*r*t/100;
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest is %0.2f\n",simple_interest(p,r,t));
    return 0;
}