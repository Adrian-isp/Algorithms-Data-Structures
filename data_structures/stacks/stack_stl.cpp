#include <iostream>
#include <stack>

// c++ standard template library stack

int main() {
    std::stack<int> stack;

    // check if stack is empty:
    if(stack.empty()) {
        std::cout << "Stack begins as empty.\n";
    }

    // push items onto stack:
    stack.push(32);
    stack.push(246);
    stack.push(628);
    stack.push(4578);

    // return the value at the top:
    std::cout << "value at top of stack: "
              << stack.top() << '\n';

    // pop the item from the top
    // (doesn't return anything)
    stack.pop();

    // stack size
    std::cout << "Stack size after popping one item: "
              << stack.size() << '\n';

     
    //stack.swap() to swap content of two stacks
    //stack.emplace() to create objects declared within that line

    return 0;
}