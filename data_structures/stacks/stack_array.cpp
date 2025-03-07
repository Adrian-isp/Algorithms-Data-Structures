#include <iostream>
#include <vector>

// stack manual implementation in C++ using an array
// for learning purposes

// stacks are LIFO - 'last in first out' data structures
// used for storing data that needs to be retrieved
// in the order it was placed

// for example: undo/redo functionality on apps
// Depth first search, parsing, backtracking

// push/pop time complexity: O(1) constant time

class Stack {
    int arr[50];
public:
    // in this case, the top value 
    // is equal the size of the stack
    int top = 0;

    void push(int value) {
        arr[top] = value;
        top++;
    }
    int pop() {
        try{
            if(top <= 0)
                throw "empty stack";
            top--;
            return arr[top];
        }
        catch (const char *exc) {
            std::cout << "stack is empty and cannot be popped\n";
            return 0;
        }
    }
    void display() {
        std::cout << "values in the stack:\n";

        std::cout << '[';
        for(int i = top-1; i > 0; i--) {
            std::cout << arr[i] << ',';
        }
        std::cout << arr[0] << "]\n";
    }
};

int main() {
    Stack stack;

    // added an interactive loop interface
    bool running = true;

    while (running) {
        std::cout << "Select an action:\n"
                  << "'a' to push to stack\n"
                  << "'p' to pop from stack\n"
                  << "'d' to display\n"
                  << "'x' to exit\n";

        char response;
        int value;

        std::cin >> response;

        switch(response) {
            case 'a':
                std::cout << "What number would you like to add?\n";
                std::cin >> value;
                stack.push(value);
                break;

            case 'p':
                value = stack.pop();
                std::cout << "Item "<< value << " was taken out of the stack\n\n";
                break;

            case 'd':
                stack.display();
                break;

            case 'x':
                running = false;
                break;

            default:
                std::cout << "Invalid. Choose again\n\n";
                break;
        }
    }

    std::cout << "Thank you for your time.\n";

    return 0;
}