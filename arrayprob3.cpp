// swap max and min array element
#include <iostream>
using namespace std; 
class swapp{
    private:
    int arr[10]={12,45,35,67,89,33,23,34,54,23};
    int size=10;
    public:
    void swapMaxMin(){
        int max=arr[0];
        int min=arr[0];
        for(int i=0; i<size; i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        cout <<"min number is:"<<min<<endl;
        for(int i=0; i<size; i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        cout <<"the max value is:"<<max<<endl;
        int temp;
        temp=min;
        min=max;
        max=temp;
        cout <<"after the swam of min and max is:"<<endl;
        cout <<"the max is:"<<max<<endl;
        cout <<"the min is:"<<min<<endl;


    }

};
int main(){
    swapp obj; 
    obj.swapMaxMin();
    return 0;
}
