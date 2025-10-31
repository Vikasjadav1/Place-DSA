#include<iostream>
using namespace std;

int main(){
   int n; 
   cout<<"enter Number:";
   cin>>n;

   if(n<=1){
    cout<<"prime"<<endl;
    return 0;
   }
   bool isprime = true;
    for(int i=2;i*i<=n;i++){
   if(n%i==0){
      isprime=false;
   }
}
   if(isprime){
    cout<<"prime";
   }
   else{
    cout<<"non-prime";
   }

return 0;
}