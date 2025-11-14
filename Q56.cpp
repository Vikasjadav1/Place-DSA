#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int> &arr , int n ,int c ,int minalloweddist){
    int cows = 1;   
    int lastpos = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] - lastpos >= minalloweddist) {
           cows++;
           lastpos = arr[i];
        }

        if(cows == c) {
            return true;
        }
    }
    return false;
}

int getdistance(vector<int> &arr , int n , int c) {
    sort(arr.begin(), arr.end());

    int st = 0;  
    int end = arr[n-1] - arr[0];  
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(ispossible(arr, n, c, mid)){
            ans = mid;          
            st = mid + 1;      
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, c = 2;

    cout << getdistance(arr, n, c);
    return 0;
}
