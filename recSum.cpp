#include <iostream>
using namespace std;
class Sum{
    public:
    int Summ(int n){
        if(n==1){
            return 1;
        }
        return n+sum(n-1);
    }
};
int main(){
    Sum obj;
    int n;
    cout <<"enter the number :"<<endl;
    cin >>n;
    obj.Summ(n);
    return 0;
    
}