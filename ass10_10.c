#include<stdio.h>
int isPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
int main()
{
  int x;
  scanf("%d",&x);
  for(int i=2;x!=1;)
  {
    if(isPrime(i))
    {
        if(x%i==0)
        {
            x=x/i;
            printf("%d ",i);
        }
        else
        {
            i++;
        }
    }
    else
    {
        i++;
    }
  }
  return 0;
}