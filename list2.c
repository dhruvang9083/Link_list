#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node * link;
}
Node *A;
Node*temp = (Node*)malloc(sizeof(Node))
(*temp).data=2;
(*temp).link=NULL;
A=temp;
temp= new node();
(*temp).data=4;
(*temp).link=NULL;

node* temp1=A;

void push(node_t *head, int val) {
    node* A * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    /* now we can add a new variable */
    current->next = (struct node_t*)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
