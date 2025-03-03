#include <iostream>

// STATIC ARRAYS

// Arrays are CONTIGUOUS data structures
// they point to a block of data in memory

int main() {
    int array[10] = {1,2,3,4,5,6,7,8};

    // accessing (indexing):
    // accesing an array is done by incrementing
    // the pointer by the size of the DATA TYPE
    // for each index
    //  access time complexity: 
    //  O(1)
    std::cout << array[2] << '\n';
    // pointer arithmetic:
    std::cout << array + 2 << '\n';

    // searching complexity (see searching algorithms)
    //  O(n) - linear search -unsorted

    // insertion:
    // at the end (appending):
    // O(1) - constant (if there's space)
    array[8] = 68;
    // at the middle or beginning:
    // O(n) - requires shifting all other elements

    // deletion:
    // at the end:
    // O(1) - constant
    // at middle or beginning:
    // O(n) - requires shifting

    // copying:
    // O(n) - requires transferring every  
    //        item within the array

    return 0;
}