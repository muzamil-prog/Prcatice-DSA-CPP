#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int gpa;

};

    void input(student *p);
    void output(student *m);
int main(){
    student s1;
    input(&s1);
    output(&s1);
    return 0;d

}

    void input(student *p){
        cout <<"enter the name of the student "<<endl;
        cin >>p->name;
        cout <<"enter the age of the student :"<<endl;
        cin >>p->age;
        cout <<"enter the gpa of the student is:"<<endl;
        cin >>p->gpa;
    }
    void output(student *m){
        cout <<"NAme:"<<m->name<<endl;
        cout <<"Age:"<<m->age<<endl;
        cout <<"Gpa:"<<m->gpa<<endl;
    }