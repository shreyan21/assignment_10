#include<stdio.h>
void natural(int n)
{
    int i=1;
    for(;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{  
    int n;
    scanf("%d",&n);
    printf("First %d natural numbers are : ",n);
    natural(n);
    return 0;
}