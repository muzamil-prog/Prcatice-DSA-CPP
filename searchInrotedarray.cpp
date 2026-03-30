#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int Search(vector<int> nums ,int target ){
       int n=nums.size();
       int start=0;
       int end=n-1;
       while(start>=end){
        int mid= start+ (end-start)/2;
        if(target==nums[mid]){
            return mid;
        }else if(target>nums[mid]){   // left array sorted
            if(target>nums[start] && target<=nums[mid]){
                end=mid-1;

            }else{
                start=mid+1;
            }
        }else{
                if(target<=nums[end] && target>=nums[mid]){
                    start=mid+1;
                }else{
                end=mid-1;
                
                }
            }
            return -1;

       }

    }
};
int main(){
    vector<int> nums={ 3,4,5,6,7,0,1,2};
    int target=0;
    solution obj;
     int result=obj.Search(nums, target);
     cout <<result<<endl;
     return 0;
}