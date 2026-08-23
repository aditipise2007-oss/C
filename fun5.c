#include<stdio.h>
void cube();
int main()
{
cube();
return 0;
}

void cube(){
int x,cube;
printf("Enter the number of x:");
scanf("%d",&x);
cube=x*x*x;
printf("cube is:%d", cube);
}