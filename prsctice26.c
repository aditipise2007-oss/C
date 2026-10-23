#include <stdio.h>
int main()
{
    int q[5], front = 0, rear = -1, i;

    q[++rear] = 10;
    q[++rear] = 20;
    q[++rear] = 30;

    for(i = front; i <= rear; i++)
        printf("%d ", q[i]);

    return 0;
}