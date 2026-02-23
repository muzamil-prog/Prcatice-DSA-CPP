// array of pointer
#include <iostream>
using namespace std;
int main(){
    int *ptr[3],a=10,b=20,c=30;
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;

    for(int i=0; i<3; i++){
        cout <<*ptr[i];
    }
    return 0;

}