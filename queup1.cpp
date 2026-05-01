#include <iostream>
using namespace std;
class Queue{
    public:
    int rear=-1;
    int front=-1;
    int queue[10];
    void push(){
        if(rear==9){
            cout <<"the queue is overfllow:"<<endl;
        }else{
            int data;
            cout <<"etner the data which you want to push in queue:"<<endl;
            cin>>data;
            if(front==-1){
                front=0;
            }
            rear++;

            queue[rear]=data;
        }
    }
    void pop(){
        if(front ==-1 || front>rear){
        cout <<"the queue is underfloaw:"<<endl;
    }else{
        cout <<"the detle the element in quewe:"<<queue[front]<<endl;
        front++;
        if(front > rear){
            front=-1;
            rear=-1;
        }
        
        
    }
}
void frontt(){
    if(front==-1 || front>rear){
        cout <<"the queue is underflow:"<<endl;
    }else{
        cout <<"the front element is:"<<queue[front]<<endl;
    }
}
void show(){
    if(front==-1 || front>rear){
        cout <<"the quewq is underflow :"<<endl;

    }else {
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<endl;
        }
    }
}
};
int main(){
    Queue obj;
    int ch;
    do{
        cout <<"---------queue----------"<<endl;
        cout <<"1... push  value :"<<endl;
        cout <<"2... pop value  :"<<endl;
        cout <<"3..  show the front value:"<<endl;
        cout <<"4... display :"<<endl;
        cout <<"5... exit "<<endl;
        cout <<"enter the choise :"<<endl;
        cin >>ch;
        switch(ch){
            case 1:
            obj.push();
            break;
            case 2:
            obj.pop();
            break;
            case 3:
            obj.frontt();
            break;
            case 4:
            obj.show();
            break;
            case 5:
            cout <<"exit the programe succufully:"<<endl;
            break;
            default:
            cout <<"the invalid choice please triagain:"<<endl;
            break;
        }
    }
        while(ch !=5);
        return 0;

    

}
