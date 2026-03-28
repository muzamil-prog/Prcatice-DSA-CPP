#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int binerySearch(vector<int> nums ,int target ){
        int n=nums.size();
        int start=0; 
        int end=n-1;
        while(start<end){
            int mid= start+ (end-start)/2;
            if(target==nums[mid]){
                return mid;
            }else if(target>nums[mid]){
              start=mid+1;
            }else if(target<nums[mid]){
                end=mid-1;
            }else{
                return -1;
            }
        }
    }
};
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int target=9;
    solution obj;
  int result=  obj.binerySearch(nums, target);
  cout <<result<<endl;
    return 0;
}