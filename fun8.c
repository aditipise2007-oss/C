#include<stdio.h>
void sum(int,float);

int main(){
int a;
float b;
printf("Enter the a and b:");
scanf("%d%f", &a, &b);
sum(a,b);
}

void sum(int x, float y)
{
float s=0;
s=x+y;
printf("sum=%.2f", s);
}