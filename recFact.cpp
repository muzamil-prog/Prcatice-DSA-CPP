#include <iostream>
using namespace std;
class Facturial{
    public:
    int fact(int num){
        if(n==0){
            return 0;

        }
        return num*fact(num-1);
    }
};
int main(){
    Facturial obj;
    int num;
    cout <<"please enter the number :"<<endl;
    cin >>num;
    obj.fact(num);
    return 0;
}