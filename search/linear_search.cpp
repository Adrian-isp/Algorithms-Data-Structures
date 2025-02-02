#include <iostream>
#include <random>
#include <ctime>

void makeRandomArray(int arr[], int &size) {
    srand(0);

    size = 10 + rand() % 10;

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
}
void displayArray(int arr[], int start, int end){
    for(int i = start; i < end; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

int main(){
    int array[20];
    int size;
    makeRandomArray(array, size);

    

    return 0;
}