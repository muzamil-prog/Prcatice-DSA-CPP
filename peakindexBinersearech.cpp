#include <iostream>
using namespace std;
class solution{
    int arr[6]={0,3,8,9,5,2};
    int n=6;
    public:
    void show(){
        int start=1;
        int end=n-2;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid-1]<arr[mid]>arr[mid+1]){
                 cout <<mid<<endl;
                 return;
            } else if(arr[mid-1]<arr[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
};
int main(){
    solution obj;
    obj.show();
    return 0;
}