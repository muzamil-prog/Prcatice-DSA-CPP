#include <iostream>
using namespace std;
class swapp{
    int arr[10]={10,5,30,2,50};
    int size=5;
    public:
    void swapMinMaxDeff(){
        int maxIndex=0;
        int minIndex=0;
        for(int i=0; i<size; i++){
            if(arr[minIndex]>arr[i]){
                minIndex=i;
               
            }
            if(arr[maxIndex]<arr[i]){
                maxIndex= i;

            }
        }
         cout <<"min index:"<<minIndex<<endl;
         cout <<"the max index is:"<<maxIndex<<endl;

        int defference= arr[maxIndex]-arr[minIndex];
        cout<<"the differecne of max and min:" <<defference<<endl;
        int temp;
        temp=arr[minIndex];
        arr[minIndex]=arr[maxIndex];
        arr[maxIndex]=temp;
        cout <<"after the swap:"<<endl;
        for(int i=0; i<size; i++){
            cout <<arr[i]<<"  ";
        }
        cout <<endl;

    }
};
int main(){
    swapp obj; 
    obj.swapMinMaxDeff();
    return 0;
}
