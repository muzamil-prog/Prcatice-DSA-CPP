#include <iostream>
#include <algorithm>

using namespace std;
class SelectionSort{
    public:
    void selection(int arr[], int n){
        for(int i=0; i<n-1; i++){
            int smalindex=i; // asuum unsorted array starting
            for(int j=i+1; j<n; j++){
                if(arr[j]>arr[smalindex]){
                    smalindex=j;

                }
            }
            swap(arr[i] , arr[smalindex]);
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
    SelectionSort obj;
    obj.selection(arr, n);
    obj.printArray(arr, n);
    return 0;
}