#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
 int arr[] = {5,9,5,8,6,5,80};
 int n=7;

 insertion_sort(arr,n);
 print(arr,n);
return 0;
}