#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

/*
    Adjacency list implementation in C++
    (undirected graphs)

    #0: [2,3]
    #1: [2]
    #2: [0,3]
    #3: [0,2]

    Adjacency lists are use for sparse graphs
    for: real world networks and and BFS/DFS

    space complexity: O(V+E) (vertices + edges)
    time complexity: Edge lookup: O(k) k-neighbors
                     add edge:    O(1)
                     remove edge: O(k)
                     iteration: efficient
 */

class adjacencyList {
    // internal vector of lists
    vector<list<int>> m_list;
public:
    // constructor
    adjacencyList(const int& size) : m_list(size) {}

    // display adjacency list
    void display() {
        for(const list<int>& li : m_list) {
            if(li.size() == 0) {
                std::cout << "empty\n"; 
                continue;
            }
            // print out the size two
            std::cout << "# of connections: " << li.size() << " | ";
            for(const int& num : li) {
                std::cout << num << ' ';
            }
            std::cout << '\n';
        }
    }
    // add an edge between vertex u and vertex v (undirected)
    void add_edge(int u, int v) {
        m_list[u].push_back(v);     
        m_list[v].push_back(u); 
    }
};

int main() {
    adjacencyList adj(5);

    // connect the 3rd and 4th vertices
    adj.add_edge(2, 3);

    adj.add_edge(0, 1);
    adj.add_edge(1, 3);
    adj.add_edge(0, 3);

    // display the resulting adjacency list
    adj.display();

    return 0;
}