#include <iostream>
using namespace std;
class insertion{
    public:
    void sortArry(int arr[5], int size){
        for(int i=1; i<=size; i++){
            int current=arr[i];
            int prev=i-1;
            while(prev>=0 && arr[prev]>current){
                arr[prev+1]=arr[prev];
                prev--;
            }
        arr[prev+1]=current;

        }
    }
    void arraySort(int arr[5], int size){
        for(int i=0; i<=size; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};
int main(){
    insertion obj;
    int arr[5]={2,4,1,6,4};
    int size=5;
    obj.sortArry(arr, size);
    obj.arraySort(arr, size);
    return 0;

}