#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "madam";
    int n= name.length()-1;
    int vowels=0;
    int consonant=0;
    for(int i=0;i<=n;i++){
        if(name[i]=='a' || name[i]=='e' ||name[i]=='i' || name[i]=='o' || name[i]=='u'){
            vowels++;
        }
        else{
            consonant++;
        }
    }
    cout<<"vowels:"<<vowels<<endl;
    cout<<"consonant:"<<consonant<<endl;
    
return 0;
}