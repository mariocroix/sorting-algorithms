#include <iostream>
#include <vector>

void selection_sort_recursive(std::vector<int>& arr, int n, int index = 0) {
    if (index >= n - 1) {
        return;
    }

    int min_index = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[min_index]) {
            min_index = j;
        }
    }

    std::swap(arr[index], arr[min_index]);

    selection_sort_recursive(arr, n, index + 1);
}

void print_array(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 25, 14, -11, 12, 22, 11};

    std::cout << "Original array: ";
    print_array(arr);

    selection_sort_recursive(arr, arr.size());

    std::cout << "Sorted array: ";
    print_array(arr);

    return 0;
}
