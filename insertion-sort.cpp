#include <iostream>
#include <vector>

void insertion_sort_recursive(std::vector<int>& arr, int n) {
    if (n <= 1) {
        return;
    }

    insertion_sort_recursive(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

void print_array(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 0, -22, 5, 6};

    std::cout << "Original array: ";
    print_array(arr);

    insertion_sort_recursive(arr, arr.size());

    std::cout << "Sorted array: ";
    print_array(arr);

    return 0;
}
