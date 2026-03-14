#include<iostream>
using namespace std;
class squarePatern{
    public:
    void show(){
        int n=4;
        int num=0;
        for(int i=0; i<n; i++){
            num++;
            for( int j=0; j<i+1; j++){
                cout <<num<<" ";
                
                

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
