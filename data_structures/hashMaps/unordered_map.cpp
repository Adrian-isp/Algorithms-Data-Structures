#include <iostream>
#include <unordered_map>

// C++ STL unordered map
// implemented as a hash map
// uses key-value pairs
// enables fast data access using keys
// amazing for large data sets

struct Data{
    int data1;
    int data2;
};

int main() {
    std::unordered_map<std::string, Data> mapped;
    // reqires two data types:
    // a key and a value
    // maps can be indexed 
    // with their key to retrieve the data
    mapped["CarNumbers"] = Data {1975, 100001};
    mapped["TimePassed"] = Data {1991, 2025};

    std::cout << mapped["CarNumbers"].data1 << ' '
              << mapped["CarNumbers"].data2 << '\n';

    mapped.clear();

    return 0;
}