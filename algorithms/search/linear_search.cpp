#include <iostream>
#include <random>

// Linear search algorithm 
// - max time compexity: O(n) - linear time
// + works for any array, sorted or unsorted

// function to randomise and display a basic array:
void makeRandomArray(int arr[], int &size) {
    srand(time(0));
    size = 10 + rand() % 10;
    for(int i = 0; i < size; i++)
        arr[i] = rand() % 100;

    std::cout << "The array is:\n{";
    for(int i = 0; i < size-1; i++) 
        std::cout << arr[i] << ',';
    std::cout << arr[size-1] << "}\n";
}

void linearSearch(int arr[], int size, int item) {
    // linear search implementation:
    for(int i = 0; i<size; i++) {
        if(arr[i] == item) {
            std::cout << "Item found at index "<< i << "!\n";
            return;
        }
    }
    std::cout << "Item not found!\n";
}

int main() {
    // array:
    int array[20];
    int size;
    makeRandomArray(array, size);

    // searched item:
    int item = array[rand() % size];
    std::cout << "The searched item is: " << item << '\n';

    // algorithm
    linearSearch(array, size, item);

    return 0;
}