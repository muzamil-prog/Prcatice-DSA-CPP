#include <iostream>
using namespace std;
int main(){
    int day;
    int month;
    int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout <<"enter the curent month:"<<endl;
    cin >>month;
    cout <<"enter the the curent day :"<<endl;
    cin >>day;
    int total =day;
    for(int i=0; i<month-1; i++){
        total+=days_per_month[i];
    }
    cout <<"total days:"<<total<<endl;
    return 0;
}