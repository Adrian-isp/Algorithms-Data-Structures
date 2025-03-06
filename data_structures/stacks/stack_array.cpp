#include <iostream>
#include <vector>

// stack manual implementation in C++ using an array
// for learning purposes

// stacks are LIFO - 'last in first out' data structures
// used for storing data that needs to be retrieved
// in the order it was placed

class Stack {
    int arr[50];
    int top = 0;
public:
    void push(int value) {
        arr[top] = value;
        top++;
    }
    int pop() {
        top--;
        return arr[top];
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