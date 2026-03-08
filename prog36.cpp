#include <iostream>
#include <vector>
using namespace std;
class pairSum{
    public:
    
    vector<int> pairsum(vector<int> &nums, int & target){
        int n=nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                 ans.push_back(i);
                 ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
int main(){
    vector<int> nums={2,3,4,5,6,7};
    int target=11;
    pairSum obj;
   vector<int> ans= obj.pairsum(nums, target);

   // show index 
    cout <<ans[0]<<" seconde"<<ans[1]<<endl;
}