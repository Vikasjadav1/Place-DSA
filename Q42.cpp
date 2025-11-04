#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;       // starting pointer
    int j = n - 1;   // ending pointer

    while (i < j) {
        swap(arr[i], arr[j]); // swap elements
        i++;
        j--;
    }

    cout << "Reversed array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
