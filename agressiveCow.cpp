#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &arr, int n, int c, int minimumDistance){
    int cow=1;
    int laststallpos=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-laststallpos>=minimumDistance){
            cow++;
            laststallpos=arr[i];
        }
      if(cow==c){
            return true;
        }
    }
    return false;
}
class AgressiveCow{
    public:
    int getDistance(vector<int> &arr, int n, int c){
        sort(arr.begin(), arr.end());
        int start=1;
        int end=arr[n-1]-arr[0];
        int ans=-1;
        while (start<=end)

        {
            int mid=start+(end-start)/2;
        if(isPossible(arr, n, c, mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        }
        return ans;
        
    }
};
int main(){
    vector<int> arr={1,2,8,4,9};
    AgressiveCow obj;
    int n=5;
    int c=3;
    int result=obj.getDistance(arr, n, c);
    cout <<result<<endl;
    return 0;
}