#include <iostream>
#include <vector>

// Merge Sort Algorithm

// It works by recursively splitting the array in half 
// until leaving only single element arrays and 
// and calling a 'merge' function to update the parent array
// it makes for nice visualisations

// Very efficient:
// Worst time complexity: O(n log n) - Quasi-linear time
// Worst space complexity: O(n) - linear space complexity

// + very time efficient
// - not very memory efficient, as it uses recursion

void mergeSort(std::vector<int> &arr);

void merge(std::vector<int> leftArr, std::vector<int> rightArr, std::vector<int> &array);

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
    mergeSort(array);

    // print the array items
    for(int i = 0; i<array.size(); i++) {
        std::cout << array.at(i) << ' ';
    }

    return 0;
}


void mergeSort(std::vector<int> &arr) {
    int len = arr.size();
    // the base end condition of the function
    // is when the array only has one element
    if(len < 2)
        return;
    
    int mid = len/2;
    
    // split the vector in two
    std::vector<int> leftArr;
    leftArr.reserve(mid);

    std::vector<int> rightArr;
    rightArr.reserve(len-mid);

    for(int i=0; i<mid; i++) {
        leftArr.push_back(arr[i]);
    }
    for(int i=mid; i<len; i++){
        rightArr.push_back(arr[i]);
    }

    // recursively sort the left and right arrays
    mergeSort(leftArr);
    mergeSort(rightArr);

    // once sorted, merge them:
    merge(leftArr, rightArr, arr);
}

void merge(std::vector<int> leftArr, std::vector<int> rightArr, std::vector<int> &array) {
    int leftlen = leftArr.size();
    int rightlen = rightArr.size();

    int l = 0, i = 0, r = 0; //indices

    // check merging conditions:
    while(l < leftlen && r < rightlen) {

        // if the left item is smaller, it gets
        // assigned to the main array
        if(leftArr[l] < rightArr[r]) {
            array[i] = leftArr[l];
            i++;
            l++;
        }
        // otherwise the right one does
        else {
            array[i] = rightArr[r];
            i++;
            r++;
        }
    }

    // for when either one side is left exhausted
    // and the other one isn't
    while(l < leftlen) {
        array[i] = leftArr[l];
        i++;
        l++;
    }
    while(r < rightlen) {
        array[i] = rightArr[r];
        i++;
        r++;
    }
}
