#include <iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    void set(int count){
        this->count=count;
    }
    Counter increament(){
        count++;
        return *this;
    }
    void show(){
        cout <<"the value if after the increamemtn of one value"<<count<<endl;
    }
};
int main(){
    Counter c1;
    c1.set(5);
    c1.increament();
    c1.show();

}
