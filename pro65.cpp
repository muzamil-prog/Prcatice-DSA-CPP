#include <iostream>
using namespace std;
class Number{
    private:
    int num;
    public:
    Number(){
        num=10;
    }
  friend void show(Number obj);
};
void show(Number obj){
    cout <<"the value of number is:"<<obj.num<<endl;
}
int main(){
    Number obj;
    show(obj);
    return 0;
}