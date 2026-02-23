#include <iostream>
using namespace std;
void singleValue(int *m){
    *m=10;
    // cout <<"enter the value of m:"<<endl;
    // cin>>*m;

}
void doubleValue(int *m){
    *m=*m*2;
    
}
int main(){
    int n1;
    cout <<"signle value:"<<endl;
    singleValue(&n1);
    cout <<n1<<endl;
    cout <<"double value :"<<endl;
    doubleValue(&n1);
    cout <<n1<<endl;
    return 0;
}