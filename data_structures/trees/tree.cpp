#include <iostream>
#include <string>
#include <memory>

// Tree implementation in C++ using classes

// Trees are data structures that represent data
// in a hierarchical system
// useful for file systems or decision trees

using std::string;
using std::unique_ptr;

class Tree {
    // tree nodes with two branches:
    struct Node {
        string data;
        unique_ptr<Node> left;
        unique_ptr<Node> right;
    };
public:
    unique_ptr<Node> Root;
    // basic attributes:
    int size;
    int depth;
    
    Tree(string rootData) {
        Root = std::make_unique<Node>();
        size = 1;
        depth = 1;
    }
};

int main() {
    Tree tree("Root of tree");

    return 0;
}