#include <iostream>
#include <random>
#include <chrono>
#include <thread>

//function to randomise element values and size of an array"
void makeRandomArray(int arr[], int &size) {
    srand(0);

    size = 10 + rand() % 10;

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
}

//to display elements between indexes with a delay:
void displayArray(int arr[], int start, int end){
    for(int i = start; i < end; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    std::this_thread::sleep_for(std::chrono::milliseconds(300));
}

int main(){
    int array[20];
    int size;
    makeRandomArray(array, size);



    return 0;
}