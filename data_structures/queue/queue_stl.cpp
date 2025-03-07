#include <iostream>
#include <queue>

// c++ standard template library queue

int main(){
    // queue declaration
    std::queue<int> queue;

    // items pushed to the front:
    queue.push(256);
    queue.push(758);
    queue.push(452);

    // queue size
    std::cout << "The queue has " 
              << queue.size() << "elements.\n";

    // retrieve both the first and last element
    std::cout << "First element in queue: "
              << queue.front() << '\n';
    std::cout << "Last element in the queue: "
              << queue.back() << "\n\n";

    std::cout << "Queue elements:\n";
    // go through queue by popping
    while(!queue.empty()) {
        std::cout << queue.front() << ' ';
        queue.pop();
    }

    // queue.swap() to copy a queue
    // emplace to create objects inline (instead of push)

    return 0;
}