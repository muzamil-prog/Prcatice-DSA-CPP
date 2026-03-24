#include <iostream>
using namespace std;
class SingleElenment{
    private:
    int arr[11]={1,1,2,3,3,4,4,6,6,8,8};
    int n=11;
    public:
    void show(){
        int start=0; int end=n-1;

        while(start<end){
            if(n==1){
        cout <<"result:"<<arr[0]<<endl;


            }
            int mid=start+(end-start)/2;

           if(arr[mid-1]!=arr[mid] && arr[mid] !=arr[mid+1]){
        cout <<"result:"<<mid<<endl;
     }
           if(mid%2==0){   // for even
             if(arr[mid-1]==arr[mid]){
                end=mid-1;
             }else{
                start=mid+1;
             }
           }else{
            if(arr[mid-1]==arr[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
           }

        }
    }

};
int main(){
    SingleElenment obj;
    obj.show();
    return 0;
}