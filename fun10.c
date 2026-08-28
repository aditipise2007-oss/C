#include <stdio.h>
void check(int x);

int main() {
    int x;
    printf("Enter the number x:");
scanf("%d", &x);
    check(x);

    return 0;
}
void check(int x)
{
if(x>0)
{
    printf("positive");
}
else
if(x<0)
{
    printf("negative");
}
else{
    printf("zero");
}
}