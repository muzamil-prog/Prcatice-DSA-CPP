#include <iostream>
using namespace std;
int main(){
    int n=10;
    int *ptr=&n;// stroe the adress of the variable in pointer 
    cout <<"the value of n is:"<<n<<endl;
    cout <<"the adress of n is:"<<ptr<<endl;
    return 0;
}