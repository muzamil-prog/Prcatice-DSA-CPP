#include <iostream>
#include <vector>
#include<climits>
using namespace std;
class sumsubarray{
    public:
    int sum(vector<int> &nums){
        int curentSum=0;
        int maxSum=INT_MIN;
        for(int i: nums){
            curentSum+=i;
            maxSum=max(curentSum, maxSum);
            if(curentSum<0){
                curentSum=0;
            }
        }
        return maxSum;
    }
};
int main(){
    vector<int> nums={-2,-5,-8};
    sumsubarray obj;
    int result=obj.sum(nums);
    cout <<"the maximus sum is:"<<result<<endl;
    return 0;
}