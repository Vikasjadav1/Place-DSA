#include<iostream>
using namespace std;

int decimaltobinary(int decimal){
    int ans=0;
    int pow=1;

    while(decimal>0){
        int rem = decimal%2;
        decimal=decimal/2;

        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}

int main(){
 int decimal;
 cout<<"enter decimal nmuber :";
 cin>>decimal;
 cout<<decimaltobinary(decimal);
return 0;
}