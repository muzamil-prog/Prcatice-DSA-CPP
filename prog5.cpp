#include <iostream>
using namespace std;
int main(){
    int n=10;
    int a;
    int *ptr=&n;
   a=++*ptr;
    cout <<"the value of ptr after the increament"<<a<<endl;
    return 0;
}