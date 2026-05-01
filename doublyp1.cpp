#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class doubly{
    public:
    Node *head;
    Node *tail;
    doubly(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node * newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        cout <<"add the node succfully:"<<endl;
    }
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;

        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        cout <<"add the at the end succfully:"<<endl;
    }
    void pop_front(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else {
            Node *temp=head;
            head=head->next;
            temp->next=NULL;
            head->prev=NULL;
            delete temp;
            cout <<"the node delte succfully:"<<endl;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
        }else{
            Node *temp;
           temp=tail;
           tail=tail->prev;
           if(tail !=NULL){
            tail->next=NULL;
            temp->prev=NULL;
           }
           delete temp;
            cout <<"the node delete :"<<endl;
        }
    }
    void show(){
        Node *temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"<==> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doubly obj;
    
    obj.push_front(5);
    obj.push_front(4);

    obj.push_back(6);
    obj.push_back(7);
     obj.show();
    obj.pop_front();
     obj.show();
    obj.pop_back();
    obj.show();
    return 0;

}