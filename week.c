#include<stdio.h>
int main()
{
int num;
char day;
printf("Enter the number:");
scanf("%d", &num);
switch(num)
{
case 1:
printf("mon");
break;
case 2:
printf("tus");
break;
case 3:
printf("wed");
break;
case 4:
printf("thu");
break;
case 5:
printf("fry");
break;
case 6:
printf("sat");
break;
case 7:
printf("sun");
break;
default:
printf("not day in week");
break;
}
return 0;
}