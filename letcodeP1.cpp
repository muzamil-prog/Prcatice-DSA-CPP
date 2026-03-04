#include <iostream>
using namespace std;
class SingleNumber{
    int arr[5]={1,2,4,1,2};
    public:

    void show(){
      int ans=0;
      for(int i=0; i<5; i++){
        ans=ans^i; // ^ bitwise operator Xor use that cancel the same value element 

      }
      cout <<"the ans is:"<<ans<<endl;
    }
};
int main(){
    SingleNumber obj;
    obj.show();
    return 0;
}