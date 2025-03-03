#include <iostream>
#include <chrono>
#include <thread>

// make a random intager array
void makeRandomArray(int arr[], int &size) {
    srand(time(0));

    size = 10 + rand() % 10;

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
}

// to display elements in an array:
void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    std::this_thread::sleep_for(std::chrono::milliseconds(200));
}

int main(){
    int size;
    int array[100];

    makeRandomArray(array, size);
    displayArray(array, size);

    int swapped;
    do{
        swapped = false;
        for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

                swapped = true;
            }
        }
        displayArray(array, size);
    }while(swapped);

    return 0;
}