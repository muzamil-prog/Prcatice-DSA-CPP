// void pointer that store the adress any type of for example
#include <iostream>
using namespace std;
int main(){
    int a=10;
    float b=15.5;
    string s="ali";
    void *pointer;//void pointer 
    pointer=&a; // store the adress of variable in pointer
    cout <<"the value of a :"<<a<<endl;
    cout <<"the adress of a:"<<pointer<<endl;
    pointer=&b;
    cout <<"the value of b :"<<b<<endl;
    cout <<"the adress of b:"<<pointer<<endl;
    pointer=&s;// store the adress of s in pointer
    cout <<"the value of is:"<<s<<endl;
    cout <<"the adress of s:"<<pointer <<endl;
    return 0;
}