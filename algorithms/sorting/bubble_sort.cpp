#include <iostream>
#include <vector>

// Bubble Sort Algorithm, slightly optimised

// Worst case time complexity: O(n^2) / O(n + n-1 + ... +1) Quadratic time
// Best case time complexity: O(n) - comparisons, O(1) swaps
// Max space complexity: O(n) - total, O(1) - auxiliary

// + easy to implement and understand
// + memory efficient
// - suboptimal time complexity

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    do {
        swapped = false;
        for(int i = 1; i < n; ++i) {
            if(arr.at(i-1) > arr.at(i)) {
                int temp = arr.at(i);
                arr.at(i) = arr.at(i-1);
                arr.at(i-1) = temp;

                swapped = true;
            }
        }
        n--;
    }while(swapped);
}

int main(){
    int item = 0;
    std::vector<int> array;

    std::cout << "Enter all the items in your array (0 to stop): ";
    
    std::cin >> item;
    while(item != 0) {
        array.push_back(item);
        std::cin >> item;
    }
    bubbleSort(array);

    for(int i = 0; i<array.size(); i++) {
        std::cout << array.at(i) << ' ';
    }

    return 0;
}