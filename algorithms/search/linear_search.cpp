#include <iostream>
#include <random>

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

int main() {
    // array:
    int array[20];
    int size;
    makeRandomArray(array, size);

    // searched item:
    int item = array[rand() % size];
    std::cout << "The searched item is: " << item << '\n';

    // linear search implementation:
    for(int i = 0; i<size; i++) {
        if(array[i] == item) {
            std::cout << "Item found at index "<< i << "!";
            break;
        }
    }

    return 0;
}