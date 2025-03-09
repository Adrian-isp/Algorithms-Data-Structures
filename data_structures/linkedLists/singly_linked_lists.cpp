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
    Node* head = nullptr;
    // tail pointer for the last one
    Node* tail = nullptr;
    // temporary pointer for manipulation
    Node* temp = nullptr;
public:
    void push(int newItem) {
        // when a new list is created:
        if(head == nullptr) {
            // create the head
            head = new Node;
            head->data = newItem;
            head->next = nullptr;

            temp = head;
            tail = head;
        }
        // when appending to a linked list:
        else {
            // use a temporary pointer
            // to link the last node
            tail = new Node;
            tail->data = newItem;
            tail->next = nullptr;
        
            temp->next = tail;
            temp = tail;
        }
        length++;
    }

    void pop() {
        temp = tail;
        // move the tail to the penultimate node
        tail = head;
        while(tail->next != temp) {
            tail = tail->next;
        }
        // delete the last value
        delete temp;
        // dereference the pointer
        tail->next = nullptr;
    }

    void display() {
        std::cout << "Current list [<data>|<nextAddress>]:\n";

        temp = head;

        while(temp->next != nullptr) {
            std::cout << "[" <<temp->data 
                      << "|" <<temp->next
                      << "] -> ";
            temp = temp->next;
        }
        std::cout << "[" <<temp->data 
                  << "|" <<temp->next
                  << "]\n";
    }
};

int main() {
    LinkedList list;

    list.push(2020);
    list.push(2021);

    list.display();

    return 0;
}