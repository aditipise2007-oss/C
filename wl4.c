#include<stdio.h>
int main()
{
int n,i=1,table;
printf("Enter the number:");
scanf("%d",&n);
while(i<=10)
{
printf("%d x%d :%d\n", n,i,n*i,table);

table=n*i;
i++;
}
return 0;
}