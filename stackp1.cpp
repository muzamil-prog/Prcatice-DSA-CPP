#include <iostream>
using namespace std;
class stack{
    public:
    // static int length=10;
    int stack[10];
    int top=-1;
    void push(){
        if(top==10-1){
            cout <<"the stack is overflow:"<<endl;
        }else{
            int data;
            cout <<"enter the data which you want to push:"<<endl;
            cin>> data;
            top++;

            stack[top]=data;
            cout <<"add the data succfully:"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout <<"the stack is overflow:"<<endl;
        }else{
            cout <<"the element delte succufully:"<<stack[top]<<endl;
            top--;
        }
    }
    void front(){
        if(top==-1){
            cout <<"the stack is underflow:"<<endl;

        }else{
            cout <<"the front element of the stack is:"<<stack[top]<<endl;
        }
    }
  void show(){
    if(top==-1){
        cout <<"the stack is overlfow:"<<endl;
    }else{
        for(int i=top; top>=0; top--){
            cout <<stack[top]<<" ";
        }
        cout <<endl;
    }
  }

};
int main(){
    stack obj;
    int ch;
    do{
        cout <<"---------stack----------"<<endl;
        cout <<"1... push  value in stack:"<<endl;
        cout <<"2... pop value in stack :"<<endl;
        cout <<"3..  show the front value:"<<endl;
        cout <<"4... display the stack:"<<endl;
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
            obj.front();
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