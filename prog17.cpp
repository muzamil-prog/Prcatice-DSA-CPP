#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout <<"enter the five element of the array:"<<endl;
    for(int i=0; i<5; i++){
        cin >>arr[i];
    }
    cout <<"your enter the five element is:"<<endl;
    for(int i=0; i<5; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
    return 0;
}