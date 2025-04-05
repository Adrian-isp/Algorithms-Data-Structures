#include <iostream>
#include <string>
#include <memory>

// Tree implementation in C++ using classes

// Trees are data structures that represent data
// in a hierarchical system
// useful for file systems or decision trees

using std::string;
using std::shared_ptr;
using std::weak_ptr;

// tree nodes with two branches:
struct Node {
    string data;
    shared_ptr<Node> left;
    shared_ptr<Node> right;
    // constructor:
    Node(string data) {
        this->data = data;
    }
};

class Tree {
public:
    // The root node of the tree
    shared_ptr<Node> root;
    // The selected node of the tree
    shared_ptr<Node> selected;

    // basic attributes:
    int tree_size;
    
    // Initialise the tree
    Tree(string rootData) {
        root = std::make_shared<Node>(rootData);
        // initialise selected
        selected = root;
        
        tree_size = 1;
    }

    void move_to_root() {selected = root;}
    void move_to_left() {if(selected->left!=nullptr) selected = selected->left;}
    void move_to_right() {if(selected->right!=nullptr) selected = selected->right;}

    // Create a left Node
    void add_left(string str) {
        if(selected->left != nullptr) {
            std::cout << "left pointer not empty!\n";
            return;
        }
        selected->left = std::make_shared<Node>(str);
        selected = selected->left;
        
        tree_size++;
    }
    // Create a right Node
    void add_right(string str) {
        if(selected->right != nullptr) {
            std::cout << "right pointer not empty!\n";
            return;
        }
        selected->right = std::make_shared<Node>(str);
        selected = selected->right;
        
        tree_size++;
    }

    // print the value inside the current tree node
    void print_node() {
        std::cout << selected->data << '\n';
    }

};

int main() {
    Tree tree("Root of tree");
    tree.print_node();

    // add two branches
    tree.add_left("branch A");
    tree.move_to_root();
    tree.add_right("branch B");

    // print the branches by moving manually
    tree.move_to_root();
    tree.move_to_left(); tree.print_node();
    tree.move_to_root();
    tree.move_to_right(); tree.print_node();

    return 0;
}