#include <stdio.h>
#include <stdlib.h>

// Dynamic Array in C

// implemented:
// appending - pushBack()
//  time complexity: O(1) / O(n) when copying the array

typedef struct DynArray {
    int* array;
    int size;
    int capacity;
}DynArray;

// append elements to dynamic array
void pushBack(DynArray *arr, int value) {
    int size = arr->size;
    int capacity = arr->capacity;

    if(size < capacity) {
       arr->array[size] = value;
       arr->size++;
       return;
    }
    else{
        // if the capacity is exceeded make a new array and copy elements
        int* newarr = (int *)malloc((capacity + 4) * sizeof(int));
        arr->capacity += 4;

        for(int i = 0; i < size; i++) {
            newarr[i] = arr->array[i];
        }
        // free the deleted array and replace the array pointer
        free(arr->array);
        arr->array = newarr;

        arr->array[size] = value;
        size++;
    }
}

// display the content of the array
void tarverse(DynArray arr) {
    for(int i = 0; i<arr.size; i++)
        printf("%d ", arr.array[i]);
    printf("\n");
}

int main() {
    DynArray arr;
    arr.capacity = 4;
    arr.size = 0;

    pushBack(&arr, 7);
    pushBack(&arr, 2025);
    pushBack(&arr, 10);
    pushBack(&arr, 10);
    pushBack(&arr, 10);

    tarverse(arr);

    return 0;
}