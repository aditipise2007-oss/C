#include <stdio.h>
int armstrong(int a);
int main() {
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    if(armstrong(a))
    {
        printf("%d is armstrong number", a);
    }
    else
    {
        printf("%d is not armstrong number", a);
    }


    return 0;
}
int armstrong(int a){
    int rem,sum=0;
    while(a>0)

    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;

    }
    if(sum==a)
        return 1;
    else
     return 0;
    }