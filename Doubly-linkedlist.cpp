#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class doublylist{
    Node* head;
    Node* tail;

    public:
    doublylist(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
          head=tail=newnode;
        }else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    
    void push_back(int val){
        Node* newnode= new Node(val);
         if(head==NULL){
          head=tail=newnode;
        }else{
           newnode->prev=tail;
           tail->next=newnode;
           tail=newnode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"dll is empty:";
        }
        Node* temp=head;
        head=head->next;

        if(head!=NULL){
        head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp=tail;
        if(head==NULL){
            cout<<"empty linked list :";
            return;
        }
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }

    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main(){
doublylist dll;
dll.push_front(1);
dll.push_front(2);
dll.push_front(3);

dll.push_back(5);
dll.push_back(6);
dll.push_back(7);

dll.pop_front();
dll.pop_back();
dll.print();
return 0;
}