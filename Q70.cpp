#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr , int st , int mid ,int end){
    vector<int> temp;
    int invcount=0;
    int i=st , j=end-1;
    if(i<=mid && j<=end){
        if(arr[i]>=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
             temp.push_back(arr[j]);
             invcount=mid-i+1;
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
    return invcount;
}


int mergesort(vector<int> &arr , int st ,int end){
    if(st<end){
        int mid = st+(end-st)/2;

      int leftinvcount =   mergesort(arr,st,mid);
       int rightinvcount = mergesort(arr,mid+1,end);
      int invcount =  merge(arr,st,mid,end);

      return leftinvcount+rightinvcount+invcount;
    }
    return 0;
}

int main(){
vector<int> arr={5,9,2,6,54,1,6,58};
int ans = mergesort(arr,0,arr.size()-1);
cout<<"inverse count :"<<ans;
return 0;
}