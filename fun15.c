#include <stdio.h>
int reverse(int x);
int main() {
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
     printf("reverse=%d", reverse(x));
    return 0;
}
int reverse(int x){
    int rev=0,rem;

    while(x!=0)
    {
        rem =x%10;
        rev=rev*10+rem;
        x=x/10;

    }

return rev;
}