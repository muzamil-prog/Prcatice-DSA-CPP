#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int val){
        data=val;
        next= NULL;
    }


};
class List{
    Node* head;
    Node* tail;
    public:
    List(){ // constructure
        head=tail=NULL;
    }
    void pushFront(int val){
        Node* newNode=new Node(val);// create node and add value new key word that intialize 
        if(head==NULL){
            head=tail=newNode;// check for list empty
        }else{
            newNode->next=head;// that pointer refer to next jisy point krana chty to head
            head=newNode;
            cout <<"node add succesfully at the fron of the list"<<endl;
        }

    }
    void pushBack(int val){
        Node *newNode=new Node(val);// create new node
        if(head==NULL){
            head=tail=newNode;
        }else {
            tail->next=newNode; 
            tail=newNode;
            cout <<"node add successfully at the end of list:"<<endl;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;
        }else{
            Node* temp=head;// store the address of head in temp 
                head=head->next; // move head to next node
                temp->next=NULL; // break conection
                delete temp; // delete the node which one seprate from list
                cout <<"node delte sucessfully:"<<endl; 
            
        }
    }
    void pop_back(){
        if(head==NULL){
            cout <<"the list is empty:"<<endl;

        }else {
            Node* temp=head; // store the adress of head in temp
            while(temp->next !=NULL){
                temp=temp->next;// temp ko next node pr shift keya

            }
            temp->next=NULL; // break the conection of last node privse node 
            delete tail; // delete the node which seprate from list
            tail=temp; // update tail ptr 
            cout <<"the element is delte and end of list:"<<endl;
        }
    }
    void printList(){
        Node* temp=head;// store the adress of head in temp
        while(temp !=NULL){
            cout <<temp->data<<" ";
            temp=temp->next; // update the  temp pointer
        }
        cout<<endl;
    }

};
int main(){
    List obj; 
    obj.pushFront(1);
    obj.pushFront(2);
    obj.pushFront(3);

    obj.pushFront(4);
     obj.printList();
    obj.pushBack(5);
     obj.printList();
    obj.pop_front();
    obj.printList();
    obj.pop_back();
     obj.printList();
    return 0;

}