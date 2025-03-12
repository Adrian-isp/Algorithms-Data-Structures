#include <iostream>
#include <unordered_set>

// C++ STL unordered set
// uses a hash function and stores
// unordered data with fast access time
// as well as insert time

int main() {
    std::unordered_set<int> set;

    set.emplace(2165);
    set.emplace(356);

    std::cout << set.size() << " items in the set\n";

    if(set.count(2165))
        std::cout << "item present in set\n";

    set.extract(2165);

    set.clear();

    if(set.empty())
        std::cout << "Set now empty.\n";    

    // insert time:
    // O(1) - amortized constant time
    set.emplace(12);
    set.emplace(1);
    set.emplace(765);
    set.emplace(512);

    // using an iterator to traverse a set
    for(std::unordered_set<int>::iterator it = set.begin();
        it != set.end(); it++) {
            std::cout << *it << ' ';
    }

    return 0;
}