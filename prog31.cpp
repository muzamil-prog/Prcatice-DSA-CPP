#include <iostream>
#include <vector>
using namespace std;
class LeanerSearch{
    private:
    vector<int> vec={1,2,3,4,5,5,};
   int requried= 4;
   public:
    void search(){
        for(int i:vec){
         if(requried==i){
            cout <<"found "<<i<<endl;
            return;
         }
         else {
            cout <<"not found:"<<endl;
         }
        }
    }
};
int main(){
    LeanerSearch obj;
    obj.search();
    return 0;
}