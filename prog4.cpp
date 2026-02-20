// deference operater that are used to acess the value of  pointer variable 
#include <iostream>
using namespace std;
int main(){
    int a, b, s, *p1, *p2;
    a=30;
    b=50;
    p1=&a;
    p2=&b;
    s=*p1+*p2; // point to adress of a and b and then check value what well store and then perform on value + operation then store the sume of a and b in s
    cout <<"result:"<<s<<endl;
    return 0;
}