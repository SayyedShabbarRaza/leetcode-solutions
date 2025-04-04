#include <unordered_map>
#include <vector>
#include <cstdlib>

class RandomizedSet {
private:
    std::unordered_map<int, int> map; // Maps value to its index in the array
    std::vector<int> arr; // Stores the values

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (map.find(val) != map.end()) return false; // If val exists, return false
        arr.push_back(val); // Add value to vector
        map[val] = arr.size() - 1; // Store index in map
        return true;
    }

    bool remove(int val) {
        if (map.find(val) == map.end()) return false; // If val doesn't exist, return false

        int lastElement = arr.back(); // Get the last element
        int index = map[val]; // Get index of the element to remove

        // Swap the element with the last one
        arr[index] = lastElement;
        map[lastElement] = index;

        // Remove last element
        arr.pop_back();
        map.erase(val);

        return true;
    }

    int getRandom() {
        return arr[rand() % arr.size()]; // Return a random element
    }
};
