#include<stdio.h>
// checking whether the digit is present or not
int isPresent(int x,int y)
{  
    if(x<0)
    x=-x;
    while(x)
    if(x%10==y)
    return 1;
    else
    x=x/10;
    
    return 0;
}
int main()
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the digit : ");
    scanf("%d",&y);
  if(isPresent(x,y))
  printf("Digit is present\n");
  else
  printf("Digit not present\n");
  return 0;

}