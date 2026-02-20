// pointer with array
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout <<"enter the five element of array:"<<endl;
    for(int i=0; i<5; i++){
        cin >>arr[i];
    }
    int *ptr;
    ptr=arr;
    for(int i=0; i<5; i++){
        cout <<"element of the aray:"<<++(*ptr)<<endl;
    }
    return 0;
}