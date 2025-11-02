#include<iostream>
using namespace std;

int main(){
  int n ;
   cout<<"enter n";
   cin>>n;

   for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n;j++){
        if(j<=n-i){
            cout<<" ";
        }
        else{
            cout<<a;
            a++;
        }
    }
    for(int j=i-1;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
   }    
return 0;
}
