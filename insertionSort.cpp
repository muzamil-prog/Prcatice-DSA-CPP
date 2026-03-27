#include <iostream>
using namespace std;
class Insertion{
    public:
    void insertion(int arr[], int n){

        for(int i=1; i<n; i++){
            int current=arr[i];
            int prev=i-1; // priev pointer that compaire with current element 
            while(prev>=0 && arr[prev]>current){
                arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=current;
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
    Insertion obj;
    obj.insertion(arr, n);
    obj.printArray(arr, n);
    return 0;
}