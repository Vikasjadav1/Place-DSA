#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int st, int mid, int end){
    vector<int> temp;
    int i=st, j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
               temp.push_back(arr[j]);
               j++;
        }
    }
    while(i<=mid){
           temp.push_back(arr[i]);
           i++;
    }
    while(j<=end){
           temp.push_back(arr[j]);
           j++;
    }

    for(int idx=0;idx<temp.size();idx++){
        arr[st+idx]=temp[idx];
    }
}

void mergesort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}

int main(){
 vector<int> arr={5,-9,6,8,4,8,5};
 mergesort(arr,0,arr.size()-1);
 for(int val : arr){
    cout<<val<<" ";
 }
return 0;
}