#include <iostream>

void bubble_sort(int array[], int size){

    int ok;
    //use a loop that runs as long as elements are still being swapped
    do{
        ok = 1;
        //go through all elements for every loop
        for(int i = 0; i < size-1; i++){
            //check if the elements are in DESCENDING order:
            if(array[i] > array[i+1]){
                //if so, swap variables using a temporary variable:
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

                //change the ok variable accordingly
                ok = 0;
            }
        }
        
    }while(ok == 0);
}

int main(){
    int n;
    int v[100];

    std::cout << "Type the amount of numbers in the array: ";
    std::cin >> n;

    std::cout << "Type "<< n << " numbers: ";

    for(int i = 0; i<n; i++){
        std::cin >> v[i];
    }

    bubble_sort(v, n);

    for(int i = 0; i<n; i++){
        std::cout << v[i] << " ";
    }

    return 0;
}