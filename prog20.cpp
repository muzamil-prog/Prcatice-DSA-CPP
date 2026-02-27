#include <iostream>
using namespace std;
class Array{

    public:
    int arr[5]={0,1,2,3,4};
    void single(){
        for(int i=0; i<5; i++){
            cout <<arr[i]<<"        ";
        }
        cout <<endl;

    }
    void square(){
        for(int i=0; i<5; i++){
            cout <<arr[i]*arr[i]<<"     ";
        }
        cout <<endl;
    }
    void cube(){
        for(int i=0; i<5; i++){
            cout <<arr[i]*arr[i]*arr[i]<<"      ";
        }
        cout <<endl;
    }
    void sum(){
        int sum;
        for(int i=0; i<5; i++){
        sum += arr[i]+(arr[i]*arr[i])+(arr[i]*arr[i]*arr[i]);
        cout <<sum<<"    ";
        }
        cout <<endl;
        

    }

};
int main(){
    Array obj;
    obj.single();
    obj.square();
    obj.cube();
    obj.sum();
    return 0;
}