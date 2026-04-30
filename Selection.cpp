#include <iostream>
using namespace std;
class Selection{
    public:
    void sortArray(int arr[5], int size){
        for(int i=0; i<size-1; i++){
            int minInd=i;
            for(int j=i+1; j<=size; j++){
                if(arr[minInd]>arr[j]){
                    minInd=j;
                }
                


            }
            
        // swap the numbers
        int temp; 
        temp=arr[i];
          arr[i]=arr[minInd];
          arr[minInd]=temp;
            

        
        }
    }
    void printArray(int arr[5], int size){
        for(int i=0; i<=size; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};
int main(){
    Selection obj;
    int arr[5]={2,4,5,3,1};
    int size=5;
    obj.sortArray(arr, size);
    obj.printArray(arr, size);
    return 0;
}