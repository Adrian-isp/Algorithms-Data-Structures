#include <iostream>
#include <queue>

// Priority queues (C++ STL)
// priority queues are FIFO data structures
// they serve elements with higher priorities first

int main() {
    std::priority_queue<double> priorityQueue;

    priorityQueue.push(9.2);
    priorityQueue.push(3.14);
    priorityQueue.push(15.709);
    priorityQueue.push(1.2);
    priorityQueue.push(12.9);

    // Notice how this places the items
    // with the highest values at the top
    // in ascending order
    while (!priorityQueue.empty()) {
        std::cout << priorityQueue.top() << '\n';
        priorityQueue.pop();
    }
    
    return 0;
}