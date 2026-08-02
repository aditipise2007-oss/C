#include<stdio.h>
int main()
{
char ch;
printf("Enter the character:");
scanf("%c", &ch);
if(ch >='A' && ch <='Z')
{
printf("Uppercase");
}
else if(ch >='a' && ch <='z')
{
printf("lowercase");
}
else if(ch >='0' && ch <='9');
{
printf("number");
}
return 0;
}