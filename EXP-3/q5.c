// delete a linked list using recursion
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void delete(struct Node** node_ref) {
    struct Node* node = *node_ref;
    
    if (node == NULL)
        return;

    delete(&(node->next));
    
    printf("Deleting node with data: %d\n", node->data);
    free(node);

    *node_ref = NULL; 
}

struct Node* create_node(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main() {
   
    struct Node* head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);

    delete(&head);

    if (head == NULL) {
        printf("Linked list successfully deleted.\n");
    }

    return 0;
}
