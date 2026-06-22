//find the maximum element in array
#include <iostream>
using namespace std;
class mmax{
    public:
    void declare(int arr[5], int size){
        for(int i=0; i<size; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
    void printmax(int arr[5], int size){
        int max=arr[0];
         int max2=arr[0];
        for(int i=0; i<size; i++){
            if(max<arr[i]){
                max=arr[i];
            
            }
            
            }
            for(int i=0; i<size; i++){
            if(max2<arr[i] && max>arr[i]){
            max2=arr[i];
            }
            }
            cout<<"second Number " <<max2<<endl;
            cout<<"first number" <<max<<endl;
            
    }
};

int main(){
    mmax obj;
    int arr[5]={2,4,6,7,9};
    int size=5;
    obj.declare(arr, size);
    obj.printmax(arr, size);
    return 0; 
}