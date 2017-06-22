#include <stdio.h>
typedef struct node {
    int val;
    struct node * next;
} node_t;

void push(node_t *head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    /* now we can add a new variable */
    current->next = (struct node_t*)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}
void print_list(node_t *head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
}
int main()
{
    node_t * head = NULL;
    head = (struct node_t*)malloc(sizeof(node_t));

    head->val = 1;
    head->next = NULL;
    push(head, 3);
    push(head, 9);
    push(head, 5);
    push(head, 10);

    /*
    push(head, 1);
    */
    print_list(head);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}
