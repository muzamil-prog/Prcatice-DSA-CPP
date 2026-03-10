#include <iostream>
using namespace std;
class floyedTriagle{
    public:
    void show(){
        int n=5;
        int num=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                cout <<num<<" ";
                num++;
            }
            cout <<endl;
        }
    }
};
int main(){
    floyedTriagle obj;
    obj.show();
    return 0;
}