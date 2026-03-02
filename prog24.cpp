#include <iostream>
using namespace std;
int main(){
    int arr[6]= {23,45,46,67,98,67};
    int size=6;
    int required= 98;
    int r=arr[0];
    for(int i=0; i<size; i++){
        if(required==arr[i]){
            r=arr[i];
            cout <<"the required number is:"<<r<<endl;
        }
    }
    return 0;
}