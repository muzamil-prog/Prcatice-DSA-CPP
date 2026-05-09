#include <iostream>
using namespace std;
class student{
    private:
   string name;
   int age;
   public:
   student(string n, int a){
    name=n;
    age=a;
   }
   void show(){
    cout<<"the name of the student is:"<<name<<endl;
    cout<<"the age of the student is:"<<age<<endl;
   }
  
};
 void dispaly(student obj){
    obj.show();
   }
int main(){
    student s("ali",22);
    s.show();
    dispaly(s);
    return 0;
}