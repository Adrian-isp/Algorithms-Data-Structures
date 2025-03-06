#include <iostream>
#include <vector>

// stack manual implementation in C++ using an array
// for learning purposes

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
        return arr[top+1];
    }
};

int main() {
    Stack stack;

    return 0;
}