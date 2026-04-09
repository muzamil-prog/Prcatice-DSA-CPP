#include <iostream>
using namespace std;
class queue{
    public:
    int f=-1;
    int r=-1;
    int length=10;
    int quee[length];
    void enquee(){
        if(r==length-1){
            cout <<"the quee is overflow:"<<endl;
        }else{
            if(f==-1){
                f=0;
                int data;
                cout <<"enter the data which you want to enquee:"<<endl;
                cin >>data;
                r++;
                quee[r]=data;
                cout <<"the value add successfully:"<<endl;
            }
            if(f>r){ // reset the quee
                f=-1;
                r=-1
            }
        }
    }
    void dequee(){
        if(f==-1 || f>r){
            cout <<"the queee if underflow or empty"<<endl;
        }else {
            cout <<"the element is dellted :"<<quee[f]<<endl;
        }
    }
    void showfront(){
        if(f==-1 || f>r){
            cout <<" the quee is empty:"<<endl;

        }else{
            cout<<"the first element:"<<quee[f]<<endl;
        }
    }
    void display(){
        if(f==-1 || f>r){
            cout <<"the quee is empty:"<<endl;

        }else {
            for(int i=f; i<=r; i++){
                cout <<quee[i]<<"  ";
            }
            cout <<endl;
        }
    }
};
int main(){
    queue obj;
    int ch; 
    do{
        cout <<"the menu of queee:"<<endl;
        cout <<"1.. enquee "<<endl;
        cout <<"2.. dequee:"<<endl;
        cout <<"3.. front element:"<<endl;
        cout<<"4 .. display all quee element:"<<endl;
        cout <<"5.. exit "<<endl;
        switch(ch){
            case 1:
            obj.enquee();
            break;
            case 2:
            obj.dequee();
            break;
            case 3:
            obj.showfront();
            break;
            case 4:
            obj.display();
            break;
            case 5:
            cout <<"exit the programe:"<<endl;
            break;
            defualt:
            cout<<"invalid choice:"<<endl;
        }
    }
    while(ch !=5);
}