#include<iostream>
using namespace std;

int main(){
  int n ;
   cout<<"enter n";
   cin>>n;
    char ch = 'A';
   for(int i=0;i<n;i++){
     
    for(int j=0;j<=i;j++){
        cout<<ch<<" ";
        ch++;
    }
   
    cout<<endl;
   }
return 0;
}