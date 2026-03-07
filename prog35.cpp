
#include <iostream>
#include <vector>
using namespace std;
class sumsubarray{
   
    public:
    int sum(vector<int> &nums){
        int curentSum=0;
        int maxSum=0;
        for(int i: nums){
            curentSum+=i;
            if(curentSum>maxSum){
                maxSum=curentSum;
                if(curentSum<0){
                    curentSum=0;
                }
                
            }
            
        }
        return maxSum;
    }
};
int main(){
     vector<int> nums={ -5,-2,-8};
     sumsubarray obj;
     int result= obj.sum(nums);
     cout <<"The maximum Sum of sub array:"<<result<<endl;
    return 0;
}