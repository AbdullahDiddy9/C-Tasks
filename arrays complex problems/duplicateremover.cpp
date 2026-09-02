#include <iostream>
using namespace std;

int main() {
    int arr[] = {9,1,7,1,3,8,2,2,9,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i] == arr[j]) {

                // Shift 
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    // Descending order
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}