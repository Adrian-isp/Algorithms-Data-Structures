#include <iostream>
#include <unordered_set>

// C++ STL unordered set
// uses a hash function and stores
// unordered data with fast access time

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

    return 0;
}