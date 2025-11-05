#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "madam";
    int n= name.length();
    int left = 0;
    int right =n-1;;
    bool ispalindrome =true;
    while(left<right){
        if(name[left]!=name[right]){
        ispalindrome=false;
        break;
        
    }else{
        left++;
        right--;
    
    }
    }
    if(ispalindrome){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not palindrome";
    }
return 0;
}