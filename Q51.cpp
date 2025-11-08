#include<iostream>
using namespace std;

int binarytodecimal(int binary){
    int ans=0;
    int pow=1;

    while(binary>0){
        int rem = binary%10;
        binary=binary/10;

        ans+=(rem*pow);
        pow=pow*2;
    }
    return ans;
}

int main(){
 int binary;
 cout<<"enter binary nmuber :";
 cin>>binary;
 cout<<binarytodecimal(binary);
return 0;
}