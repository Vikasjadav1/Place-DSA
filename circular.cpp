#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
    }
};

class CircularLinkedList{
    Node* head;
    Node* tail;

    public:
    CircularLinkedList(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
    }
    
    void pop_front(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }

    void pop_back(){
          if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* prev = head;
            Node* temp=tail;
            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
           
        }
    }


    void print() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)" << endl;
    }
};
int main(){
CircularLinkedList cll;
cll.push_front(1);
cll.push_front(2);
cll.push_front(3);

cll.push_back(4);
cll.push_back(5);
cll.push_back(6);

cll.pop_front();

cll.pop_back();

cll.print();
return 0;
}