#include<stdio.h>
void sum();
int main()
{
sum();
return 0;
}
void sum()
{
int a,b,sum;
printf("Enter two number :");
scanf("%d%d", &a, &b);
sum = a+b;
printf("sum = %d", sum);
}
