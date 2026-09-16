#include<stdio.h>
int main()
{
int x,y;
int ch;
int op;
printf("Enter the value of x and y:");
scanf("%d%d", &x,&y);
printf("1.add. \n");
printf("2. sub. \n");
printf("3, mul. \n");
printf("4. div. \n");

printf("Enter a choice:");
scanf("%d", &op);

switch(op)
{
case 1:printf("add=%d", x+y);
break;
case 2:printf("sub=%d", x-y);
break;
case 3:printf("mul=%d", x*y);
break;
case 4:
if(y==0)
{
printf("div is not possible");
}
else
{
printf("div=%d", x/y);
}
}
return 0;

}


