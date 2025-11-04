#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bool issorted = true;
   for(int i=0;i<n-1;i++){
      
    if(arr[i]<arr[i+1]){
        issorted=true;
    }
    else{
        issorted =false;
        break;
    }
   }

   if(issorted){
    cout<<"sorted";
   }
   else{
    cout<<"unsorted";
   }
   

    return 0;
}
