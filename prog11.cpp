// pointer with function 
//formal parameter are used as a copy in uerdefine function 
// actual paramter when we pass value to in main fuctio when function call 
#include <iostream>
using namespace std;

void exchange(int*m, int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
int main(){
    int n1=10, n2=20;
    cout<<"before swaping:"<<endl;
    cout <<"N1:"<<n1<<endl;
    cout <<"N2:"<<n2<<endl;
    cout <<"after swapint:"<<endl;
    exchange(&n1,&n2);
    cout <<"N1:"<<n1<<endl;
    cout <<"N2:"<<n2<<endl;
    return 0;

}