#include <stdio.h>
#include <stdlib.h>

// Dynamic Array in C

// implemented:
// appending - pushBack()
//  time complexity: O(1) / O(n) when resizing the array

// deleting from end - popBack()
//  time complexity: O(1) constant time

// + fast random access
// + fast insertion deletion at end (except when resizing)
// - slow insertion and deletion everywhere else
// - costly array resizes

typedef struct DynArray {
    int* array;
    int size;
    int capacity;
}DynArray;

// initialise the array
void arrayInit(DynArray *arr) {
    arr->capacity = 4;
    arr->size = 0;
    arr->array = (int*)malloc(4*sizeof(int));
}

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
        arr->size++;
    }
}
// delete from end:
void popBack(DynArray *arr) {
    arr->size--;
}

// display the content of the array
void tarverse(DynArray arr) {
    for(int i = 0; i<arr.size; i++)
        printf("%d ", arr.array[i]);
    printf("\n");
}

int main() {
    DynArray arr;
    // the array is initialised with a capacity of 4 intagers
    arrayInit(&arr);

    // add six values
    pushBack(&arr, 7);
    pushBack(&arr, 2025);
    pushBack(&arr, 10);
    pushBack(&arr, 10);
    pushBack(&arr, 10);  // the fifth item triggers a resize
    pushBack(&arr, 10);

    // remove the last item
    popBack(&arr);

    // display the array using traverse
    tarverse(arr);

    return 0;
}