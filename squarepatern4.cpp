#include<iostream>
using namespace std;
class squarePatern{
    public:
    void show(){
        int n=3;
         char ch='A';
        for(int i=0; i<n; i++){
            for( int j=0; j<n; j++){
                cout <<ch<<" ";
                ch++;

            }
            cout <<endl;
        }
    }
};
int main (){
  squarePatern obj;
  obj.show(); 
    return 0;
}
