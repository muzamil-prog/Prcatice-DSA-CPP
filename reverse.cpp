// reverse string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str="hello pakistan";
    reverse(str.begin(), str.end());
    cout <<str<<endl;
}