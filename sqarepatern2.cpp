#include <iostream>
using namespace std;
class squarePattern{
    public:
    
    void show(){
        int n=4;
        for(int i=0; i<n; i++){
          char  ch='A';
            for(int j=0; j<n; j++){
                cout <<ch<<" ";
                ch=ch+1;

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