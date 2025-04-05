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
    // The root node of the tree
    unique_ptr<Node> root;
    // The selected node of the tree
    unique_ptr<Node> selected;

    // basic attributes:
    int size;
    int depth;
    
    // Initialise the tree
    Tree(string rootData) {
        root = std::make_unique<Node>();
        size = 1;
        depth = 1;

        root->data = rootData;
        root->left = nullptr;
        root->right = nullptr;
    }

    // Add a left Node
};

int main() {
    Tree tree("Root of tree");

    std::cout << tree.root->data;

    return 0;
}