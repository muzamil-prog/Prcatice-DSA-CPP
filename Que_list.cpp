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
class Queue{
    public:
    Node *front;
    Node *rear;
    Queue(){
        front=rear=NULL;
    }
    void enque(int val){
        Node *newNode=new Node(val);
        if(front==NULL){
            rear=front=newNode;
            
        }else{

        rear->next=newNode;
        rear=newNode;
    
    }
        cout <<"the data add successfuly:"<<endl;
}
    void deque(){
        if(front==NULL){
            cout <<"the queue is empty:"<<endl;
            return;
        }else{
            Node *temp=front;
            cout<<"the delet element is quee:"<<front->data<<endl;
            front=front->next;
         if(front==NULL){
            rear=NULL;
         }
         delete temp;
            

    

        }

    }
    void peak(){
        if(front==NULL){
            cout <<"the quee is empty:"<<endl;
        }else{
            cout <<"the front element is :"<<front->data<<endl;
        }
    }
    void showAll(){
        if(front==NULL){
            cout <<"the queeu is empty:"<<endl;
        }else {
            Node * temp=front;
            while(temp !=NULL){
                cout <<temp->data<<" ";
                temp=temp->next;
            }
            cout <<endl;
        }
    }
};
int main(){
    Queue obj;
    obj.enque(1);
    obj.deque();
    obj.showAll();
    obj.peak();
    return 0;
}