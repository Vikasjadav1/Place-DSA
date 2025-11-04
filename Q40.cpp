// #include<iostream>
// #include <climits>
// using namespace std;

// int main(){
//   int arr[] = {9,5,11,1,6,4};
//   int max = INT_MIN;
//   int min = INT_MAX;
//   int n = (sizeof(arr) / sizeof(arr[0])) - 1;
  

//   for(int i=0;i<n;i++){
//        if(arr[i]> max){
//         max=arr[i];
//        }
//        if(arr[i]<min){
//         min=arr[i];
//        }
   
//   }
//   cout<<"max element :"<<max<<endl;
//   cout<<"min element :"<<min<<endl;
// return 0;
// }




#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

int main(){
  int arr[] = {9,5,11,1,6,4};
  int maxnum = INT_MIN;
  int minnum = INT_MAX;
  int n = (sizeof(arr) / sizeof(arr[0])) - 1;
  

  for(int i=0;i<n;i++){
     maxnum = max(maxnum,arr[i]);
     minnum = min(minnum,arr[i]);
   
  }
  cout<<"max element :"<<maxnum<<endl;
  cout<<"min element :"<<minnum<<endl;
return 0;
}


