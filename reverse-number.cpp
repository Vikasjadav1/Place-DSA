#include<iostream>
using namespace std;

int main(){
    int n;
    int lastnumber , reverse = 0;
     cout<<"enter number:";
     cin>>n;
      int temp = n;
     while(temp!=0){
        lastnumber = temp%10;
        reverse=reverse*10+lastnumber;
        temp=temp/10;
     }
     cout<<"reverse number of "<<n<<" is "<<reverse<<" ";


return 0;
}