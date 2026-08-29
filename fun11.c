#include<stdio.h>
void sum(int,float);

int main(){
sum(a,b);
}

void sum(int a, float b)
{
int a;
float b, s=0;
printf("Enter the a and b:");
scanf("%d%f", &a, &b);


s=a+b;
printf("sum=%.2f", s);
}