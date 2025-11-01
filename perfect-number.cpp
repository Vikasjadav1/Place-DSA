#include<iostream>
using namespace std;

int main(){
    int n;
     cout<<"enter number:";
     cin>>n;
       int perfect=0;
     for(int i=1;i<n;i++){
        if(n%i==0){
         perfect+=i;
        }
     }
     if(perfect==n){
        cout<<"its perfect numebr :";
     }
     else{
        cout<<"its not perfect number:";
     }


return 0;
}