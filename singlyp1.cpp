#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class sigly{
    public:
    Node *tail;
    Node *head;
    sigly(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        newNode->next=head;
        head=newNode;
        cout <<"the node add succfully:"<<endl;
    }
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        tail->next=newNode;
        tail=newNode;
        cout <<"add easily:"<<endl;
    }
    void pop_front(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
            return;
        }
        if(head==tail){
            delete head;
            return;
            
        }else{
            Node *temp;
            temp=head;
            head=head->next;
            temp->next=NULL;
            cout <<"the node is deltee:"<<endl;
        }
    }

        void pop_back(){
            if(head==NULL){
                cout <<"the list is empty:"<<endl;
                return;
            }
            if(head==tail){
                delete head;
                return;
            }else{
                Node *temp;
                temp=head;
                while(temp->next != tail){
                    temp=temp->next;
                }
                temp->next=NULL;
                delete tail;
                temp=tail;
                cout <<"teh delte node:"<<endl;
            }
        }
    void show(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
        }else{
            Node *temp;
            temp=head;
            while(temp !=NULL){
                cout <<temp->data<<" -->";
                temp=temp->next;
            }
            cout <<"NULL"<<endl;
        }
    }
};
int main(){
    sigly obj;
    obj.push_front(2);
    obj.push_front(1);
     obj.push_back(3);
    obj.push_back(4);
    obj.show();
    obj.pop_front();
    obj.show();
    obj.pop_back();
    obj.show();

}