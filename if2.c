#include<stdio.h>
int main()
{
int age;
printf("Enter the age:");
scanf("%d", &age);
if(age>25 && age<30)
{
printf("age is :%d \n", age);
printf("coffee with me \n");
}
else
{
printf("age is :%d \n", age);
printf("go home \n");
}
printf("out of the loop");
return 0;
}