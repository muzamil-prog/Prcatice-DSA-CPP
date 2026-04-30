#include <iostream>
#include <algorithm>
using namespace std;
class bubble{
    public:
    void SortArray(int arr[5], int size){
        for(int i=0; i<size-1; i++){
            bool isSwap=false;
            for(int j=0; j<size-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    isSwap=true;
                }
            }
        }
    }
    void printArray(int arr[5] , int size){
        for(int i=0; i<size; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};
int main(){
    bubble obj;
    int arr[5]={2,4,5,6,2};
    int size=5;
    obj.SortArray(arr, size);
    obj.printArray(arr,size);
    return 0;
}