#include <iostream>
using namespace std;
class trianglePatter{
    public:
    void show(){
        int n=4;
            char ch='A';
             
        for(int i=0; i<n; i++){
                ch++;  
            for(int j=0; j<i+1; j++){
               cout<<ch<<" ";
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