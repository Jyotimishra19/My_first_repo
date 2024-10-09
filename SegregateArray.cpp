#include <iostream>
#include <vector>

std::vector<int> segregateArray(const std::vector<int>& arr) {
    std::vector<int> evens, odds, result;
    for (int num : arr) {
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }
    result.insert(result.end(), evens.begin(), evens.end());
    result.insert(result.end(), odds.begin(), odds.end());
    return result;
}

int main() {
    std::vector<int> arr = {12, 34, 45, 9, 8, 90, 3};
    std::vector<int> result = segregateArray(arr);

    std::cout << "Output: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}