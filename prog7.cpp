// pointer with array
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    // cout <<"enter the five element of array:"<<endl;
    // for(int i=0; i<5; i++){
    //     cin >>arr[i];
    // }
    int *ptr;
    ptr=&arr[4];// store the adresss of last element
    for(int i=0; i<5; i++){
        cout <<"element of the aray:"<<(*ptr)--<<endl;
    }
    return 0;
}