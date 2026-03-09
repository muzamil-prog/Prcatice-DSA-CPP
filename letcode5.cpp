#include <iostream>
using namespace std;
class solution{
    public:
    double power(double x, int n){
 if(x==0){
    return 0.0;
 }
 if(n==0){
    return 1.0;
 }
 

        
long binerform=n;
if(binerform<0){
    x=1/x;
    binerform=-binerform;
}
 double ans=1;
while(binerform>0){
    if(binerform%2==1){
        ans=ans*x;

    }
    x=x*x;
    binerform/=2;
}
return ans;


    }
};
int main(){
    solution obj;
    cout<<obj.power(3,5);
    return 0;
}