#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class list{
    Node* head;
    Node* tail;

    public:
    list(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val){
       Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"linkde list empty";
        }
        Node* temp= head;
        head=head->next;
        temp=NULL;
    }

     void pop_back(){
        if(head==NULL){
            cout<<"linkde list empty";
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
     }

     void insert(int val , int pos){
        if(pos<0){
            cout<<"invalid position";
            return ;
        }
        if(pos==0){
            push_front(val);
            return;
        }

        Node* newNode=new Node(val); 
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position";
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
     }

     int search(int target){
        Node* temp=head;

        int idx=0;
        while(temp!=NULL){
            if(temp->data==target){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
     }

    void print(){
       Node * temp = head;
       while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
       }
    }
};

int main(){
list ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.insert(5,1);
ll.search(1);

ll.print();
return 0;
}