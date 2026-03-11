#include <iostream>
using namespace std;
class inverted{
    public:
    void show(){
        int n=4;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout <<" ";
            }
            for(int j=i-1; j<n; j++){
                cout <<i;
            }
            cout <<endl;
        }
    }

    };
    int main(){
        inverted obj;
        obj.show();
        return 0;
    }
