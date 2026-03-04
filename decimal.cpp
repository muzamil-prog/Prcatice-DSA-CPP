#include <iostream>
using namespace std;
int decimal(int binery){
    int ans=0;
   int pow=1;
    while (binery>0)
    {
        int rem=binery%10;

      ans+=pow*binery;
      binery/=10;
      pow*=2;
           
    }
    return pow;
    
}
int main(){
    int bin=100;
    cout <<decimal(bin)<<endl;
    return 0;
}