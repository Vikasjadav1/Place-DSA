
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "vikas";
    int n= name.length()-1;
   
    int left = 0;
    int right=n;

    while(left<right ){
        char temp = name[left];
        name[left]=name[right];
        name[right]=temp;
        left++;
        right--;
    }
    cout<<name;
   
return 0;
}