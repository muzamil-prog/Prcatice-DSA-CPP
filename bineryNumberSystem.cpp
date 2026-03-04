#include <iostream>
using namespace std;
int bineryNumber(int decimal){
    int ans=0;
    int pow=1;


    while(decimal>0){
        int rem=decimal%2;
        decimal=decimal/2;
        ans+=rem*pow;
        pow*=10;
    }
    return ans;
}
int main(){
    int i;
    for(int i=0; i<10; i++){
  cout <<  bineryNumber(i)<<endl;
    }
    cout <<endl;
    return 0;
}