#include <iostream>
#include <algorithm>
using namespace std;
class bubleSort{
    public:
    void getbuble(int arr[], int n){
        for(int i=0; i<n-1; i++){
        bool iswap=false;
        for(int j=0; j<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        iswap=true;
      }
    }
    if(!iswap){
        return;
    }
}
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}
};
int main(){
    int arr[5]={4,1,5,2,3};
    int n=5;
    bubleSort obj;
    obj.getbuble(arr, n);
    obj.printArray(arr,n);
    return 0;
}