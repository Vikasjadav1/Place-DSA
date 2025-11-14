#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        bool isswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            return;
        }
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

 bubble_sort(arr,n);
 print(arr,n);
return 0;
}