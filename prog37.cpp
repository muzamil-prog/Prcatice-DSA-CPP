#include <iostream>
#include <vector>
using namespace std;
class majrity{
    public:
    int mj(vector<int> &nums){
        int n= nums.size();
        for(int i=0; i < n; i++){
            int freq=0;
            for(int j=0; j < n; j++){
                if(nums[i]==nums[j]){
                    freq++;
                }
            }
            if(freq >n/2){
                return nums[i];
            }
        }
        return -1;
    }
};
int main(){
    vector<int> nums={2,3,4,5,3,5,3,4,24,5,4,5};
    majrity obj;
    int result= obj.mj(nums);
    cout <<result<<endl;
    return 0;
}