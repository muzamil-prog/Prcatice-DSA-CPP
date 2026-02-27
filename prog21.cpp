#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,12,34,56,43,23,23,23,56,45};
    int size=10;
    int  r= arr[0];
    for(int i=0; i<size; i++){
      if(r<arr[i]){
        r=arr[i];
      }
    }
      cout <<"the maximum number is:"<<r<<endl;
      return 0;

}