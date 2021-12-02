#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node h, *t, curr;
    int n, i = 0;
    printf("Creating a Linked List:");
    printf("\nEnter The Number of Nodes: ");
    scanf("%d", &n);
    struct node h = t = NULL;
    while (i < n)
    {
        h = (node *)malloc(sizeof(node));
        printf("\nEnter The Value of Data for Node %d: ", i + 1);
        scanf("%d", &h->data);
        if (h == NULL && t == NULL)
        {
            t = h = curr;
        }
        else
        {
            t->next = curr;
            t = t->next;
        }
    }

    return 0;
}