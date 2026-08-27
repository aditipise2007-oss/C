#include<stdio.h>
void check();

int main(){

check();
}

void check()
{
int a;
printf("Enter the number a:");
scanf("%d", &a);
if(a%2==0)
{
printf("the number is even");
}
else
{
printf("the number is odd");
}
}