#include <iostream>
using namespace std;
class squarePattern{
    public:
    
    void show(){
        int n=4;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout <<j<<" ";
            }
            cout <<endl;
        }
    }
};
int main(){
    squarePattern obj;
    obj.show();
    return 0;
}