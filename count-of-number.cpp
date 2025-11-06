#include<iostream>
using namespace std;

int main(){
    int n;
    int lastnumber , reverse = 0;
     cout<<"enter number:";
     cin>>n;
     int count = 0;
     while(n!=0){
        count++;
        lastnumber = n%10;
        reverse=reverse*10+lastnumber;
        n=n/10;
     }
     cout<<"count is :"<<count;


return 0;
}