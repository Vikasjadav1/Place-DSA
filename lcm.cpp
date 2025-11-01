#include<iostream>
using namespace std;
  
  int gcd(int a , int b){
   
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
      if(a==0) return b;
      return a;
  }

  int lcm(int a , int b){
    int gcd1 = gcd(a,b);
    return a*b/gcd1;
  }

int main(){
   int a=20 ,b=28;

   cout<<lcm(a,b);
return 0;
}