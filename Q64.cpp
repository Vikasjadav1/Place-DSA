#include<iostream>
using namespace std;

int maxDiagonalSum(int arr[][3], int n) {
    int primary = 0;
    int secondary = 0;

    for(int i = 0; i < n; i++) {
        primary += arr[i][i];               // primary diagonal
        secondary += arr[i][n - i - 1];     // secondary diagonal
    }

    return max(primary, secondary);  // maximum of two
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;

    cout << maxDiagonalSum(arr, n);
    return 0;
}
