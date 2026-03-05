#include <iostream>
#include <vector>
using namespace std;
class Single{
    vector<int> num={1,2,3,4,5,4,5,3,2};
    public:
    void show(){

        int ans=0;
        for(int i: num){
            ans=ans^i;

        }
        cout <<"the value of ans is:"<<ans<<endl;
    }
};
int main(){
    Single obj; 
    obj.show();
    return 0;
}