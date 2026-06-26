#include <iostream>
using namespace std;
int fact(int n){

    if(n==1){
        return 1
    }else{
        return n*fact(n-1);
    }
}
int main()
{
    int n=6;
    int result=fact(n);
    cout <<"the facturial of n is:"<<result<<endl;
    return 0;
}