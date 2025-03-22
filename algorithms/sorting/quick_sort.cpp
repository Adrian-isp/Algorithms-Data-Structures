#include <iostream>
#include <vector>

// Quick Sort algoriths

// It works by recursively setting a pivot,
// moving all smaller elements to its left

void quickSort(std::vector<int> &arr, int start, int end);
int partition(std::vector<int> &arr, int start, int end);

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
    quickSort(array, 0, array.size()-1);

    // print the array items
    for(int i = 0; i<array.size(); i++) {
        std::cout << array.at(i) << ' ';
    }

    return 0;
}

void quickSort(std::vector<int> &arr, int start, int end) {
    if(end <= start) // recursive base case
        return;
    
    // place the pivot using the function
    // all smaller items are on the left
    // all larger items are on the right
    int pivot = partition(arr, start, end);

    // repeat recursively for the left and right of the pivot
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int partition(std::vector<int> &arr, int start, int end) {
    // for this algorithm the pivot starts at the end of the array
    int pivot = arr[end];
    // use a temporary index for searching the pivot locations
    int i = start-1;

    // all items smaller than the pivot must be on the left
    for(int j = start; j <= end-1; j++) {
        // when the item is smaller than the pivot,
        // swap the index with the element
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // the final locations of the pivot is found
    // and it is placed right after the temporary index
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}
