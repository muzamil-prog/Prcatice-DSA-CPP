#include <iostream>
#include <vector>;
using namespace std;
class solution{
    int arr[4]={1,2,3,4};
    int n=4;
    public:
    void show(){
        vector<int> prefix(n,1);
    
        for(int i=1; i<n; i++){
            prefix[i]*=arr[i];
            cout <<prefix[i]<<" ";
            cout <<endl;
        }
        vector<int> suffix(n,1);
        for(int j=n-2; j>=0; j--){
            suffix[j]*=arr[j];
            cout <<suffix[j]<<" ";
        }
    
    }
};
int main(){
    solution obj;
    obj.show();
    return 0;
}