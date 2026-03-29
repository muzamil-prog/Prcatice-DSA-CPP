#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr, int n, int m, int maxAllpages){
    int pages=0;
    int student=1;
    for(int i=0; i<n; i++){
        if(arr[i]>maxAllpages){
            return false;
        }
        if(pages+arr[i]<=maxAllpages){
            pages+=arr[i];
        }else{
            student++;
            pages=arr[i];
        }
    }
    return student<= m ? true: false;
      

}
class bookallocation{
    public:
    int allocate(vector<int> &arr, int n, int m){
        int sum=0;
          if(m>n){
            return -1;
          }
          for(int i=0; i<n; i++){
              sum+=arr[i];
          }
          int ans=-1;
          int start=0; 
          int end=sum;// range of possible ans
          while(start<=end){
            int mid=start+(end-start)/2;
            if(isValid(arr, n, m, mid)){// left part
                ans=mid;
                end=mid-1;
            }else{// right part 
                start=mid+1;
            }
          }
          return ans;
    }
    
};
int main(){
    vector<int> arr={2,1,3,4};
    int n=4;
    int m=2;
    bookallocation obj;
    int result = obj.allocate(arr, n, m);
    cout <<result<<endl;
    return 0;
}