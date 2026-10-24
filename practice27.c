#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first, *second, *third;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    while(first != NULL)
    {
        printf("%d ", first->data);
        first = first->next;
    }

    free(second);
    free(third);
    /* first now points to NULL */

    return 0;
}