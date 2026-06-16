#include <iostream>
#include <algorithm>
using namespace std;
class selection{
    public:
    void sort(int arr[5], int size){
        for(int i=0; i<size; i++){
            int unsortpart=i;
            for(int j=i+1; j<size; j++){
                if(arr[unsortpart]>arr[j]){
                    unsortpart=j;
                }
            }
        swap(arr[unsortpart], arr[i]);

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
    int arr[5]= {2,4,5,1,3};
    int size=5;
    selection obj;
    obj.sort(arr, size);
    obj.print(arr, size);
    return 0;
}