#include <iostream>
#include <vector>

using std::vector;

/*
        Adjecency matrix implementation in C++
    Using a directed graph

       end
      0 1 1     Matrix[i][j], where i->j
start 1 0 0     start->end
      0 0 0

        Adjacency lists are useful for 
    very dense graphs and fast edge lookup
    
    space complexity: O(V^2)
    time complexity:
        edge lookup: O(1)
        add edge:    O(1)
        remove edge: O(1)
        iteration over edge: slower
 */

class adjacencyMatrix {
    // internal matrix
    vector<vector<int>> m_matrix;
public:
    // constructor (thanks ChatGPT)
    adjacencyMatrix(const int& size) : m_matrix(size, vector<int>(size, 0)) {}

    // display the matrix value and connections
    void display_matrix() {
        for(vector<int>& line : m_matrix) {
            for(int& value : line) {
                std::cout << value << ' ';
            }
            std::cout << '\n';
        }
    }

    // ties the 'v'th vertex to the 'u'th vertex node
    void add_edge(int v, int u) {
        m_matrix.at(v).at(u) = 1;
        // a directed graph would have connected them in reverse too
    }
};

int main() {
    // make a 4 node matrix
    adjacencyMatrix adj(4);

    // add a connection from the 2nd to the 3rd node
    adj.add_edge(1, 2);
    // connect the 2nd to the first
    adj.add_edge(1, 0);
    // connect the first one to itself
    adj.add_edge(0, 0);

    adj.display_matrix();

    return 0;
}