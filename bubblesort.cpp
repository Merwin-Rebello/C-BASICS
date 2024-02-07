#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Dynamically allocate memory for the array
    int *arr = new int[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble sort algorithm
    for (int counter = 0; counter < n - 1; counter++) {
        for (int i = 0; i < n - counter - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
