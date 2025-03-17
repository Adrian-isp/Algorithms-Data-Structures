#include <stdio.h>
#include <stdlib.h>

// Doubly linked list in C

typedef struct Node {
    int val;
    struct Node* next; 
    struct Node* prev; 
} Node;

void pushBack(Node* tail, int value) {
    // allocate memory for the new node
    tail->next = (Node*) malloc(sizeof(Node));
    tail->next->prev = tail;

    // move the tail forwards
    tail = tail->next;
    tail->next = NULL;

    tail->val = value;
}

int main() {
    // create a pointer to the head of the list
    Node* head = NULL;
    Node* tail = NULL;
    head = (Node*) malloc(sizeof(Node));

    head->val = 1;
    head->next = NULL;
    head->prev = NULL;
    // assign the tail to point to the end
    tail = head;

    printf("Doubly linked list implementation in C!\n");

    pushBack(tail, 12);
    pushBack(tail, 256);



    return 9;
}