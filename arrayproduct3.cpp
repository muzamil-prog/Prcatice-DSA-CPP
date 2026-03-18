#include <iostream>
#include <vector>
using namespace std;
class solution{
    int arr[4]={1,2,3,4};
    int n=4;
    public:
    void show(){
    vector<int> ans(n,1);
     for(int i=1; i<n; i++){
        ans[i]=ans[i-1]*arr[i-1];
     }
     int sufix=1;
     for(int j=n-2; j>=0; j--){
        sufix*=arr[j+1];
        ans[j]*=sufix;
       
     }
     for(int i=0; i<n; i++){
        cout <<ans[i]<<" ,";
     }

        
    }
};
int main(){
    solution obj;
    obj.show();
    return 0;
}