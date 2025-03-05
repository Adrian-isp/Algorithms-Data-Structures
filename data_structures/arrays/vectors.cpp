#include <iostream>
#include <vector>

// vectors in c++ are dynamic arrays 
// They are part of the standard template library (STL)

int main() {
    //vector declaration and initialisation:
    std::vector<int> numvector = {2, 5, 88};

    // can be indexed just like regular arrays
    for(int num : numvector) {
        std::cout << num << " ";
    }
    // or use the at method:
    std::cout << "\n1st element: " << numvector.at(0);
    
    // appending elements to vectors:
    numvector.push_back(22);
    numvector.push_back(5234);
    // popping items at the end of the vector:
    numvector.pop_back();

    // size attribute of vector:
    std::cout << "\nsize of vector: " << numvector.size() << '\n';

    // delete the second element of the vector (using an iterator)
    numvector.erase(numvector.begin() + 1);

    // destroys the vector
    numvector.clear();

    return 0;
}