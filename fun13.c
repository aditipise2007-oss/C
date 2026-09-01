#include <stdio.h>
int power(int base,int up);
int main() 
{
    int base,up;
    printf("Enter the two value:");
    scanf("%d%d", &base, &up);
    
   printf("power=%d",power(base,up));
    return 0;
}
int power(int base,int up)
{
int i,result=1;
for(i=1;i<=up;i++)
{
result=result*base;
}
return result;
}