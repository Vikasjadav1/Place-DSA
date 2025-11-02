#include<iostream>
using namespace std;

int main(){
  int n ;
   cout<<"enter n";
   cin>>n;
   int a=n;
   for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        cout<<a<<" ";
    }
    a--;
    cout<<endl;
   }
return 0;
}