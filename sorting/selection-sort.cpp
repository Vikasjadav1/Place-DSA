#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
       int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
               smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
        
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

 selection_sort(arr,n);
 print(arr,n);
return 0;
}