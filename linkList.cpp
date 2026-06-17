#include <iostream>
using namespace std;
class Node {
    public:
    Node *next;
    Node * prev;
    int data;
    Node(int data){
        this->data=data;
        next=prev=NULL;

    }
};
class Linklist{
    public:
    Node *head;
    Node *tail;
    Lainklist(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }

    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
}