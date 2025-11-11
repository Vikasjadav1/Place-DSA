// #include<iostream>
// #include<vector>
// using namespace std;

// int binary_serach( vector<int> arr , int target){
//     int st=0;
//     int n=arr.size();
//     int end=n-1;
//     if(st<=end){
//         int mid=st+(end-st)/2;
//         if(target>arr[mid]){
//             st=mid+1;
//         }else if(target<arr[mid]){
//             end=mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
   
//     vector<int> arr = {1,3,5,8,9,10,11,55,85};
//     int target=9;
//     cout<<binary_serach(arr,target);
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

int binary_serach( vector<int> arr , int target ,int st ,int end){
   
    if(st<=end){
        int mid=st+(end-st)/2;
        if(target>arr[mid]){
            return binary_serach(  arr ,target ,mid+1 ,end);
        }else if(target<arr[mid]){
           return binary_serach(  arr ,target ,st ,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
   
    vector<int> arr = {1,3,5,8,9,10,11,55,85};
    int target=9;
     int st=0;
    int n=arr.size();
    int end=n-1;
    cout<<binary_serach(arr,target,st,end);
return 0;
}