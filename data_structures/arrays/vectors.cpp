#include <iostream>
#include <vector>

// vectors in c++ are dynamic arrays 
// They are part of the standard template library (STL)

int main() {
    //vector declaration:
    std::vector<int> nums = {2, 5, 88};

    // appending elements to vectors:
    nums.push_back(22);
    nums.push_back(5234);

    // can be indexed just like regular arrays
    for(int num : nums) {
        std::cout << num << " ";
    }
    // or use the at method:
    std::cout << "\n1st element: " << nums.at(0);

    return 0;
}