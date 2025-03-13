#include <iostream>
#include <vector>

// Selection Sort Algorithm

// it finds the MINIMUM item within the collection
// and places it at the start of the searched section
// incrementing the start pointer until all items are sorted

// Worst case time complexity: O(n^2) Quadratic time, O(n) swaps
// Best case time complexity: O(n^2) Quadratic, O(1) swaps
// Worst case space complexity: O(1) auxiliary

// + usually better than Bubble Sort as it makes less swaps
// - suboptimal time complexity

void selectionSort(std::vector<int> &arr) {
    for(int i = 0; i < arr.size()-1; i++) {
        // use a pointer to the location of the minimum value
        int jmin = i;
        for(int j = i+1; j < arr.size(); j++) {
            // check if item is the new minimum
            if(arr.at(j) < arr.at(jmin)) 
                jmin = j;
        }
        // swap if a better minimum is found
        if(jmin != i) {
            int temp = arr.at(jmin);
            arr.at(jmin) = arr.at(i);
            arr.at(i) = temp;
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
    selectionSort(array);

    // print the array items
    for(int i = 0; i<array.size(); i++) {
        std::cout << array.at(i) << ' ';
    }

    return 0;
}