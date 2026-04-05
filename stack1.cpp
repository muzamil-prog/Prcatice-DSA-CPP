// stack is lifo mean last in first out
// write a program in make stack of ten element which  push element pop element  with dispaly list of stack and also use top function which last element of stack;
#include <iostream>
using namespace std;

class Stack{
    private:
 
    int stack[10];
    int top=-1;
    public:
    void push(){
        int data;
        if(top==9){
        cout <<"The stack is overflow:"<<endl;
        }else{
            cout <<"enter data which you want to push:"<<endl;
            cin >>data;
            top++;
          stack[top]=data;
        }
    
    }
    void pop(){
        if(top==-1){
            cout <<"the stack is underflow which mean is empty:"<<endl;

        }else{
            top--;
        }
    }
    void showtop(){
        if(top==-1){
            cout <<"the stack is empty"<<endl;
        }else{
            cout <<stack[top]<<endl;
        }
    }
    
        void stackList(){
        cout <<"the list of the stack:"<<endl;
        for(int i=top; i>=0; i--){
            cout <<stack[i]<<" ";
                
            }
            cout <<endl;
        }

};
int main(){
    Stack obj;
    int ch;
    do{
        cout <<"1.. push"<<endl;
        cout <<"2.. pop"<<endl;
        cout <<"3.. top"<<endl;
        cout <<"4.. exist"<<endl;
        cout <<"enter your choice"<<endl;
        cin >>ch;
        switch(ch){
            case 1:
            obj.push();
            obj.stackList();
            break;
            case 2:
            obj.pop();
            obj.stackList();
            break;
           case 3:
           obj.showtop();
        //    obj.stackList();
           break;
            case 4:
            cout <<"exist the programe:"<<endl;
            break;
            default:
            cout <<"invalid choice try again :"<<endl;
            break;
        }
    }
    while(ch !=4);

}