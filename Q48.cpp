
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "viakas";
    int n= name.length()-1;
   
   int freq[256]={0};
   for(int i=0;i<=n;i++){
    freq[name[i]]++;
   }
   for(int i=0;i<256;i++){
    if(freq[i]>0){
        cout<<char(i)<<"->"<<freq[i]<<endl;
    }
   }
   
return 0;
}