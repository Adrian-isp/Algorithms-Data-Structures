#include <iostream>
#include <random>

// Binary search algorithm 
// + max time compexity: O(log n) - logarithmic time (very efficient)
// + space complexity: O(1) - Constant space complexity (because it's iterative)
// - requires a sorted array

// make a basic sorted array:
void makeRandomArray(int arr[], int &size) {
    srand(time(0));
    size = 10 + rand() % 10;

    arr[0] = rand() % 10;
    for(int i = 1; i < size; i++)
        arr[i] = arr[i-1] + rand() % 10;

    std::cout << "The array is:\n{";

    for(int i = 0; i < size-1; i++) 
        std::cout << arr[i] << ',';
    std::cout << arr[size-1] << "}\n";
}

int binarySearch(int arr[], int size, int item) {
    // binary search implementation:
    int start = 0;
    int end = size-1;

    while(start < end) {
        // use a midpoint to choose whether or not to branch the array
        int mid = start + (end - start)/2;

        if(arr[mid] == item) 
            return mid;
        if(arr[mid] < item)
            start = mid;
        else
            end = mid;
    }
    return -1;

}

int main() {
    // array:
    int array[20];
    int size;
    makeRandomArray(array, size);

    // searched item:
    int item;
    std::cout << "Enter a number you want to search: ";
    std::cin >> item;

    // algorithm:
    int answer;
    answer = binarySearch(array, size, item);

    // answer:
    if(answer == -1)
        std::cout << "item not found!\n";
    else
        std::cout << "item found at index " << answer << "!\n";

    return 0;
}