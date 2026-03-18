#include <iostream>
using namespace std;
class trianglePatter{
    public:
    void show(){
        int n=5;
        
             
             
        for(int i=1; i<n; i++){
             
            for(int j=1; j<i+1; j++){
               cout<<j<<" ";
               
            }
            cout <<endl;
        }
    }
};
int main(){
    trianglePatter obj;
    obj.show();
    return 0;
}