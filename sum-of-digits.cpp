#include<iostream>
using namespace std;

int main(){
    int n;
    int lastnumber , sum = 0;
     cout<<"enter number:";
     cin>>n;

     while(n!=0){
   
        lastnumber = n%10;
        sum+=lastnumber;
        n=n/10;
     }
     cout<<"sum is :"<<sum;


return 0;
}