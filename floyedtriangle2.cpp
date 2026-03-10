#include <iostream>
using namespace std;
class floyedTriagle{
    public:
    void show(){
        int n=5;
        char ch='A';
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                cout <<ch<<" ";
                ch++;
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