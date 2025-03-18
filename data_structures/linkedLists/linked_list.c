#include <stdio.h>
#include <stdlib.h>

// Doubly linked list in C

// implemented:
// list nodes
// pushBack() - appending
// popBack() - removing from end
// traverse() - print all items

typedef struct Node {
    int val;
    struct Node *next;
    struct Node *prev;
} Node;

void pushBack(Node **tail, int value) {
    // allocate memory for the new node
    Node *nextNode = (Node *)malloc(sizeof(Node));

    nextNode->val = value;
    nextNode->next = NULL;
    nextNode->prev = *tail;

    (*tail)->next = nextNode;

    // update tail pointer
    *tail = nextNode;
}

void popBack(Node **tail) {
    *tail = (*tail)->prev;
    free((*tail)->next);
    (*tail)->next = NULL;
}

void traverse(Node *head) {
    // print the first item(for formatting)
    printf("%d", head->val);
    head = head->next;

    while (head != NULL) {
        printf(" - %d", head->val);
        head = head->next;
    }
}

int main() {
    // create a pointer to the head of the list
    Node *head = NULL;
    Node *tail = NULL;
    head = (Node *)malloc(sizeof(Node));

    head->val = 1;
    head->next = NULL;
    head->prev = NULL;
    // assign the tail to point to the end
    tail = head;

    printf("Doubly linked list implementation in C!\n");

    // pass the reference using pointers to pointers (C-style)
    // append elements to linked list
    pushBack(&tail, 12);
    pushBack(&tail, 256);
    pushBack(&tail, 1024);
    pushBack(&tail, 7);

    popBack(&tail);

    // go through the linked list from head to tail and print
    traverse(head);

    return 9;
}