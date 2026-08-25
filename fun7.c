#include<stdio.h>
void mix();
int main()
{

mix();
return 0;
}
void mix()
{
int x , y;
printf("Enter the two number:");
scanf("%d%d", &x ,&y);
if(x>y)
{
printf("mix = %d",x);
}
else
{
printf("mix = %d", y);

}
}
