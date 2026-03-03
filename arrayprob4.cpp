// swap max and min array element
#include <iostream>
using namespace std; 
class swapp{
    private:
    int arr[10]={12,45,35,67,89,33,23,34,54,23};
    int size=10;
    public:
    void swapMaxMin(){
        int maxIndex=0;
        int minIndex=0;
        for(int i=0; i<size; i++){
            if(arr[minIndex]>arr[i]){
                minIndex=i;
            }
        }
        cout <<"min index:"<<minIndex<<endl;
        for(int i=0; i<size; i++){
            if(arr[maxIndex]<arr[i]){
                maxIndex=i;
            }
        }
        cout <<"the max index is:"<<maxIndex<<endl;
        int temp;
        temp=arr[minIndex];
        arr[minIndex]=arr[maxIndex];
        arr[maxIndex]=temp;
        cout <<"after the swam of min and max is:"<<endl;
        for(int i=0; i<size; i++){
            cout << arr[i]<<"  ";
        }
        cout <<endl;


    }

};
int main(){
    swapp obj; 
    obj.swapMaxMin();
    return 0;
}
