#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;
    public:
    void set(string name, int marks){
        this->name=name;
        this->marks=marks;
    }
    void show(){
        cout <<"name:"<<name<<endl;
        cout <<"marks:"<<marks<<endl;
    }
};
int main(){
    student* arr[5];
    string n;
    int m;
    for(int i=0; i<5; i++){
        arr[i]=new student();
        cout <<"enter the five student deatils:"<<i+1<<endl;
        cout <<"enter the nam:"<<endl;
        cin>>n;
        cout <<"enter the marks :"<<endl;
        cin >>m;
        arr[i]->set(n,m);
    }
    student *toper=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]->marks>toper->marks){
              toper=arr[i];
        }
    }
    cout <<"name:"<<toper->name<<endl;
    cout <<"marks :"<<toper->marks<<endl;
 return 0;
}
/// int search;
for(int =0; i<n; i++){
    if(arr[i]->id==serach){
        cout <<stude be found 
    }
}