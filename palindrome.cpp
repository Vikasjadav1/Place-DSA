#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
int last;
     int temp = n;
     int rev=0;
     while(n!=0){
        last = n%10;
        rev= rev*10+last;
        n=n/10;
     }
     if(temp==rev){
        cout<<"its palindrome";
     }else{
        cout<<"not";
     }

    return 0;
}
