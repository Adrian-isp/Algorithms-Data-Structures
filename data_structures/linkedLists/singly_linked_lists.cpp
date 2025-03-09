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

    int getTail() {
        return tail->data;
    }

    void display() {
        if(head == nullptr){
            std::cout << "The list is empty\n\n";
            return;
        }
        std::cout << "Current list [<data>|<nextAddress>]:\n";
        
        temp = head;
        while(temp->next != nullptr) {
            std::cout << "\033[38;2;10;10;10m" 
                      << "[" <<temp->data 
                      << "|" <<temp->next
                      << "] -> \033[0m";
            temp = temp->next;
        }
        std::cout << "\033[38;2;10;10;10m"
                  << "[" <<temp->data 
                  << "|" <<temp->next
                  << "]\033[0m\n\n";
    }
};

int main() {
    LinkedList list;

    bool running = true;

    while (running) {
        
        char response;
        int value;

        std::cout << "\033[1m"
                  << "what would like to do?\n"
                  << "\033[0m\033[38;2;255;255;0m"
                  << "'a' to append to list\n"
                  << "'p' to pop from list\n"
                  << "'x' to exit"
                  << "\033[0m\n\n";
        std::cin >> response;

        switch (response) {
        case 'a':
            std::cout << "Enter a value to append:\n";
            std::cin >> value;
            list.push(value);
            std::cout << "\n";
            break;
        case 'p':
            std::cout << "\033[1m"
                      << list.getTail()
                      << " has been popped from the list"
                      << "\033[0m\n\n";
            list.pop();
            break;
        case 'x':
            running = false;
            break;
        default:
            std::cout << "Invalid input! Try again!\n";
            break;
        }

        list.display();
    }

    std::cout << "Thank you for your attention!";

    return 0;
}