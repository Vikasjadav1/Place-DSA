#include<iostream>
#include<climits>
using namespace std;


// int daigonalsum(int arr[][3], int n) {
//     int sum=0;
//     for(int i = 0; i <n; i++) {
//         for(int j = 0; j < n; j++) {
//           if(i==j){
//             sum+=arr[i][j];
//           }else if(j==n-i-1){
//             sum+=arr[i][j];
//           }
//         }
       
//     }
//     return sum;
// }

int diagonalsum(int arr[][3], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        // primary diagonal
        sum += arr[i][i];

        // secondary diagonal (avoid double count at center)
        if(i != n - i - 1) {
            sum += arr[i][n - i - 1];
        }
    }
    return sum;
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n=3;

    // function call
     cout<<diagonalsum(arr,n);
    return 0;
}
