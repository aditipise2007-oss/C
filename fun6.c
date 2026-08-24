#include<stdio.h>
int maxnum(int , int);

int main()
{
int x,y,result;
result=maxnum(x,y);

return 0;
}

int maxnum(int x , int y)
{
int maxnum=0;
printf("Enter the x and y:");
scanf("%d%d", &x, &y);
if(x>y)
{
printf("max=%d", x);
}
else
{
printf("max=%d", y);
}
return maxnum;
}