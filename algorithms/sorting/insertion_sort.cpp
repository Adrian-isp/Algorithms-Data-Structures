#include <iostream>
#include <vector>

// Insertion Sort Algorithm

// Worst time complexity: O(n^2) Quadratic time O(n^2) swaps
// Best time complexity: O(n) linear time O(1) swaps
// Space complexity: O(1) auxiliary

// + Usually than Selection sort as it has a best case O(n)
// - subpar time complexity

void insertionSort(std::vector<int> &arr) {
    // go through the array
    for(int i = 1; i < arr.size(); i++) {
        int j = i;
        // while the last items are larger than the current one
        // swap the variables
        // (go backwards through the array)
        for(j; j > 0 && arr[j-1] > arr[j]; j--) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
        }
    }
}

int main() {
    std::vector<int> array;
    int item;
    // Read an array
    std::cout << "Enter all the items in your array (0 to stop): ";
    std::cin >> item;
    while(item != 0) {
        array.push_back(item);
        std::cin >> item;
    }
    // selection sort algorithm
    insertionSort(array);

    // print the array items
    for(int i = 0; i<array.size(); i++) {
        std::cout << array.at(i) << ' ';
    }

    return 0;
}