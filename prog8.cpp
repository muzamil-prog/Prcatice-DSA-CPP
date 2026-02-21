//pointer with string
#include <iostream>
using namespace std;
int main(){
    char str[20]="hello muzammil";// declare the array of string
    char *ptr;// declare the pointer 
    ptr=str;// assing the array of string in pointer 
    cout <<ptr<<endl;// display the array of string until it fund zero
    return 0;
}