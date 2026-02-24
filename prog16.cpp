#include <iostream>
using namespace std;
struct Time{
    int hourse;
    int mint;
    int second;
} ;

int main(){
    int sec;
    void convert(Time * temp, int sec);
    cout <<"enter the totla number of secondes:"<<endl;
    cin >>sec;
 convert(&temp, sec);
 cout <<"time in hours min and second:"<<endl;
 cout <<"totaol hours :"<<temp->hourse<<endl;

    
    
}