#include<iostream>
using namespace std;

int main(){
  int n ;
   cout<<"enter n";
   cin>>n;
    char ch = 'A';
   for(int i=1;i<=n;i++){
    int a=i;
    for(int j=1;j<=i;j++){
        cout<<a<<" ";
        a--;
    }
    ch++;
    cout<<endl;
   }
return 0;
}