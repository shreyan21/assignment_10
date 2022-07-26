#include<stdio.h>
//  calculating area of circle
float area(int radius)
{
    return 3.14*radius*radius;
}
int main()
{  
    int n;
   scanf("%d",&n);
   printf("Area of circle is %0.2f\n",area(n));
   return 0;

}