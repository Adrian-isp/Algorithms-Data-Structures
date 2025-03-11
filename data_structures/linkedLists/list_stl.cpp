#include <iostream>
#include <list>

// C++ Standard Template library list
// (doubly linked list)

// highly efficient for inserting and deleting
// data from beginning and end

int main() {
    std::list<int> linked;

    // items can be pushed both from the 
    // front as well as the back

    // insertion / deletion
    // O(1) = constant time
    linked.push_back(256);
    linked.push_front(1024);
    linked.push_back(556);
    linked.push_back(23);
    
    // example of popping and traversing
    while(!linked.empty()) {
        std::cout << linked.back() << ' ';
        linked.pop_back();
    }

    // traversal requires c++ iterators
    
    return 0;
}