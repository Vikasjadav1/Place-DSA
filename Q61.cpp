#include<iostream>
#include<climits>
using namespace std;


int maxrowsum(int arr[][3], int row, int col) {
    int maxsum=INT_MIN;
    for(int i = 0; i < row; i++) {
         int currsum=0;
        for(int j = 0; j < col; j++) {
          currsum+=arr[i][j];
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;

    // function call
     cout<<maxrowsum(arr, row, col);

   

    return 0;
}
