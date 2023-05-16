#include <iostream>
#include <vector>

int main() {
    // Create an empty vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements using indexing
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;

    // Iterate over the vector using a for loop
    std::cout << "All elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Iterate over the vector using a range-based for loop (C++11 or later)
    std::cout << "All elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element from the vector
    numbers.pop_back();

    // Check the size of the vector
    std::cout << "Vector size: " << numbers.size() << std::endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty" << std::endl;
    }

    return 0;
}

