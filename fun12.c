#include<stdio.h>
int factorial(int);

int main()
{
int a;
printf("Enter the a number:");
scanf("%d", &a);

printf("factorial=%d", factorial(a));


return 0;
}

int factorial(int a)
{
int i,fact=1;
for(i=1;i<=a;i++)
{
fact=fact*i;
}
return fact;
}
