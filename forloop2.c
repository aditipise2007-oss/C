#include<stdio.h>
int main()
{
int i,table;
printf("Enter the number :");
scanf("%d", &table);
for(i=1;i<=10;i++)
{
printf("%d x %d : %d\n",table,i, table*1);
}
return 0;
}