#include <iostream>
#include <vector>

void rotateArray(std::vector<int>& arr, int n, int k) {
    // Create a temporary array to store the rotated elements
    std::vector<int> temp(k);

    // Copy the first k elements to the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by k positions
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 2; // Number of positions to rotate

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr, n, k);

    std::cout << "Array after rotating " << k << " positions to the left: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
