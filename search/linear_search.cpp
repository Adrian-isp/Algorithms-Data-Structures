#include <iostream>
#include <random>
#include <chrono>
#include <thread>

// function to randomise element values and size of an array"
void makeRandomArray(int arr[], int &size) {
    srand(0);

    size = 10 + rand() % 10;

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
}

// to display elements between indexes with a delay:
void displayArray(int arr[], int start, int end) {
    for(int i = start; i < end; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    std::this_thread::sleep_for(std::chrono::milliseconds(400));
}

int main() {
    // array:
    int array[20];
    int size;
    makeRandomArray(array, size);

    // searched item:
    int item = array[rand() % size];
    std::cout << "The searched item is: " << item << '\n';

    

    return 0;
}