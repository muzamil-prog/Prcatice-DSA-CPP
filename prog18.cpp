#include <iostream>
using namespace std;
int main(){
    float average;
    int sum=0;
    int arr[5]={3,3,5,7,8};
    cout <<"the five element of the array is:"<<endl;
    for(int i=0; i<5; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;

    cout <<"the sum of the array element:"<<endl;
    for(int i=0; i<5; i++){
        sum+=arr[i];

    }
    cout <<"Sum:"<<sum<<endl;
    cout <<"the average of the element is:"<<endl;
    
    average=sum/5.0;
    cout <<"Average:"<<average<<endl;
    return 0;
}