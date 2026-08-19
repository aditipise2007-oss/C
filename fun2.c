//function declaration
#include<stdio.h>
void namaste();
void  bonjour();

//function calling
int main()
{
printf("Enter i for india and f for French:");
char ch;
scanf("%c", &ch);
if(ch == 'i')
{
namaste();
}
else
{
bonjour();
}
return 0;
}

//function defination 
void namaste()
{
printf("namaste");
}
void bonjour()
{
printf("bonjour");
}