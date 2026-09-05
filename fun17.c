#include <stdio.h>
int reverse(int a);
int main() {
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    if(a == reverse(a))
        {
         printf("palindrom number");
    }
    else
    {  
        printf("not palindrom");            
    }
    return 0;
}
int reverse(int a)
{
    int rev=0,rem;

    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;

    }

return rev;
}