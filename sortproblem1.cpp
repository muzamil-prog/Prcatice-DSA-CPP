#include <iostream>
#include <algorithm>
using namespace std;
class buble{
    public:
    void sort(int arr[5], int size){
        for(int i=0; i<size-1; i++){
            for(int j=0; i<size-i-1; j++){
                if(arr[i]>arr[j+1]){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    void print(int arr[5], int size){
        for(int i=0; i<size; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};
int main(){
    int arr[5]= {2,4,5,1,2};
    int size=5;
    buble obj;
    obj.sort(arr, size);
    obj.print(arr, size);
    return 0;
}