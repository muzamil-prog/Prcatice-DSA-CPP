#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout <<"created the parent class A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout <<"created the parent class B:"<<endl;
    }
};
class C:public B{
    public:
    void show(){
        cout <<"created the class C"<<endl;
    }
};
int main(){
     A *pte;
    A obj1;
    B obj2;
    C obj3;
    pte = &obj1;
    pte->show();
    pte=& obj2;
    pte->show();
    pte=&obj3;
    pte->show();
    return 0;
}