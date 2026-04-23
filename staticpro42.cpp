#include <iostream>
using namespace std;
class Counter{
    private:
    static int count;
    public:
    Counter(){
        count++;
    }
    ~Counter(){
        count--;
    }
    static int getcount(){
        return count;
    }
};
int Counter::count=0;
int main(){
    cout<<"before create the objects count is:"<<Counter::getcount();
    Counter c1;
    Counter c2;
    cout<<"after creating two objects :"<<Counter::getcount()<<endl;

{
    Counter c3;
    cout <<"inside the block create three object :"<<Counter::getcount()<<endl;
}

cout <<"out side of the block the object c3 destroy "<<Counter::getcount()<<endl;

return 0;
}