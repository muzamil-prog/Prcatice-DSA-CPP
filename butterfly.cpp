#include <iostream>
using namespace std;
class butterfly{
    public:
    void show(){
        int n=4;
        for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout <<"*";
        }
        for( int j=0; j<2*(-i)+6; j++){
            cout <<" ";
        }
        for(int j=0; j<i+1; j++){
            cout <<"*";
        }
        cout <<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
          cout <<"*";
        }
        for(int j=0; j<2*(-n+i)+8; j++){
            cout <<" ";
        }
        for(int j=0; j<n-i; j++){
            cout <<"*";
        }
        cout <<endl;
    }
    }
};
int main(){
    butterfly obj;
    obj.show();
    return 0;
}