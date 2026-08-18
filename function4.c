#include<stdio.h>
void square();
int main()
{
square();
return 0;
}
void square()
{
 int a,square;
printf("enter the value of a:");
scanf("%d",&a);
square=a*a;
printf("square=%d",square);
}