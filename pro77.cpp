#include <iostream>
using namespace std;
class Time{
    int min;
    int hours;
    int sec;
    public:
    void set(int m, int h, int s){
        min=m;
        hours=h;
        sec=s;
        
}
Time& operator ++(){
    ++min;
    if(min>=60){
        min=0;
        hours++;
    }if(hours>=24){
        hours=0;

    }
    
return  *this;
}
Time& operator --(){
    --min;
    if(min<=0){
        min=59;
        hours--;

    }if(hours<=0){
        hours=23;
    }
    return *this;
}
void show(){
    cout <<"the min is:"<<min<<endl;
    cout <<"the hours is:"<<hours<<endl;
    cout <<"the sec is :"<<sec<<endl;
}
};
int main(){
    Time obj;
    obj.set(12, 11, 59);
    ++obj;
    obj.show();
    --obj;
    obj.show();
    return 0;
}