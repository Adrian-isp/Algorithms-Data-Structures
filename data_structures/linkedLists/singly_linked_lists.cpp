#include <iostream>

// Singly linked list implementation

// Singly linked lists are data structures
// comprised of nodes that contain 
// data as well the address of the next node

//   Node         Node         Node
// int|*next -> int|*next -> int|*next
//                             (nullptr)

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    int length = 0;
    // head pointer for the first item
    Node* head;
    // tail pointer for the last one
    Node* tail;
    // temporary pointer for appending
    Node* temp;
public:
    void push(int newItem) {
        // when a new list is created:
        if(head == nullptr) {
            // create the head
            head = new Node;
            head->data = newItem;
            temp = head;
            tail = head;
        }
        // when appending to a linked list:
        else {
            // use a temporary pointer
            // to link the last node
            temp = new Node;
            temp->data = newItem;
        
            tail->next = temp;
            tail = temp;
        }
        length++;
    }
};

int main() {


    return 0;
}