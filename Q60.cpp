#include<iostream>
using namespace std;

// 2D array search function
pair<int,int> search2D(int arr[][3], int row, int col, int target) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target) {
                return {i,j};   // target mil gaya
            }
        }
    }
    return {-1,-1};  // target nahi mila
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    int target = 8;

    // function call
    pair<int,int> ans =  search2D(arr, row, col, target);
    cout<<"("<<ans.first<<","<<ans.second<<")"<<endl;

    return 0;
}
