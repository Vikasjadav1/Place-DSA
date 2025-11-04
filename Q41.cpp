#include<iostream>
#include <climits>
using namespace std;

int main(){
  int arr[] = {9,5,11,1,6,4};
  int n = (sizeof(arr) / sizeof(arr[0]));
  int sum =0;
  int avg=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  avg=sum/n;
  cout<<"sum :"<<sum<<endl;
  cout<<"avg :"<<avg<<endl;
return 0;
}


