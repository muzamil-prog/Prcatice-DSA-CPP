#include <iostream>
using namespace std;
int main(){
    int arr[5]={12,34,23,45,34};
    int size=5;
    cout <<"the actual order of aray:"<<endl;
    for(int i=0; i<size; i++){
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
    cout <<"reverse order of array:"<<endl;
    for(int i=4; i>=0; i--){
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
}
