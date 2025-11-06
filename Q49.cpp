#include<iostream>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   string s1 = "adaam";
   string s2= "aadam";

   bool isanagram=true;
    
   int n1=s1.length();
   int n2=s2.length();

   sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     
     if(n1!=n2){
        isanagram=false;
        return 0;
     }

     for(int i=0;i<n1;i++){
        if(s1[i]!=s2[i]){
            isanagram=false;
            break;
        }
     }

     if(isanagram){
        cout<<"its anagram string";
     }
     else{
        cout<<"its not anagram string";
     }

return 0;
}