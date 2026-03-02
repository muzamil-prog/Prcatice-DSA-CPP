#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Reverse{
    private:
    vector<int> vec {1,2,3,4,5};
    public:
    void show(){
        reverse(vec.begin(), vec.end());
        
        for(int i:vec){
            cout <<i<<" ";
        }
        cout <<endl;
    }
};
int main(){
    Reverse obj;
    obj.show();
    return 0;
}