#include<stdio.h>
int main()
{
int a;
printf("enter the value of a:");
scanf("%d", &a);
if(a%5==0)
{
printf("a is div by 5");
}
else if(a%7==0)
{
printf("a id div by 7");
}
else if(a%5==0 && a%7==0)
{
printf("div by both");
}
else
{
printf("both are not div");
}
return 0;
}