#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class stack{
    public:
    Node *top;
    stack(){
        top=NULL;
    }
    void push(int val){
        Node *newNode=new Node(val); //create a node
        if(newNode==NULL){
            cout <<"the stack is overflow:"<<endl;
            return;
        }
        newNode->next=top;
        top=newNode;
        cout <<"value add succseffuly:"<<endl;

    }
    void pop(){
        if(top==NULL){
            cout <<"the stack is underflow:"<<endl;
        }
        Node *temp=top;
        cout<<"the ellement is delt:"<<top->data<<endl;
        top=top->next;
        delete temp;


    }
    void peak(){
        if(top==NULL){
            cout <<"the stack is undeflow :"<<endl;

        }else{
        cout <<"the top element of the stack is:"<<top->data<<endl;
    }
}
    void showAll(){
        if(top==NULL){
            cout <<"the stack is underflow :"<<endl;
        }
        Node *temp=top;
        while(temp !=NULL){
            cout <<temp->data<<" ";
            temp=temp->next;
        }
        cout <<endl;
        }
    };
  int main(){
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.showAll();
    obj.pop();
    obj.showAll();
    obj.peak();
    
  }