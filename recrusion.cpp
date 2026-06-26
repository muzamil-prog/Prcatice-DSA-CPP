// recursion are three steps defing 
// 1  case line which where stop function 
// 2  case 2 where function called recrsively or bar bar
// 3  case 3 update value for each call 
#include <iostream>
using namespace std;
int  sum(int n){
    if(n>0){
       n+sum(n-1);
        return 
        
    }else {
        return 0;
    }
}
int main(){
int n=10;
int result=sum(n);
cout<<"the total ans for sum of all numbers:" <<result<<endl;
}