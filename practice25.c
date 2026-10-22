#include <stdio.h>
int main()
{
    int stack[5], top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    while(top != -1)
        printf("%d ", stack[top--]);

    return 0;
}