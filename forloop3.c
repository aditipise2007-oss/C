#include<stdio.h>
int main()
{
int a,count=0;
printf("Enter the number :");
scanf("%d", &a);
for( ;a!=0;a=a/10);
{
count++;
}
printf("the count is :\n", a,count);
return 0;
}