#include<stdio.h>
int main()
{
int n,temp,rem,rev=0;
printf("Enter the number:");
scanf("%d", &n);
temp=n;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(n==rev)
{
printf("palindrom");
}
else
{
printf("not palindrom");
}

return 0;
}