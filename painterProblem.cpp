#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int p, int mid){
    int painter=1;
    int time=0;

    for(int i=0; i<n; i++){
        if(arr[i]>mid){
            return false;
        }
        if(time+arr[i]<=mid){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=p?true:false;
}
class Painter{
    public:
    int paint(vector<int> &arr, int n, int p){
        if(p>n){
            return -1;
        }
        int maxi=0;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            maxi=max(maxi, arr[i]);
        }
        int ans=-1;
        int start=maxi;
        int end=sum;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(arr, n ,p, mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> arr={40,30,10,20};
    int n=4;
    int p=2;
    Painter obj;
    int result=obj.paint(arr, n, p);
    cout <<result<<endl;
    return 0;
}
