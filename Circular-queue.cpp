#include<iostream>
using namespace std;


class Circularqueue{
    int* arr;
    int currsize , cap;
    int r,f;

    public:
    Circularqueue(int size){
        cap=size;
        arr = new int[cap];
        f=0;
        r=-1;
        currsize=0;
    }

    void push(int val){
       if(currsize==cap){
        cout<<"cqis full";
        return;
       }

       r=(r+1)%cap;
       arr[r]=val;
       currsize++;
    }

    void pop(){
       if(empty()){
        cout<<"cq is empty";
        return;
       }

       f=(f+1)%cap;
       currsize--;           
    }

    int front(){
         if(empty()){
        cout<<"cq is empty";
        return -1;
       }
       return arr[f];
    }

    bool empty(){
        return currsize==0;
    }

    void print(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
Circularqueue cq(3);
cq.push(1);
cq.push(2);
cq.push(3);
cq.pop();
cq.push(4);
cq.print();
return 0;
}