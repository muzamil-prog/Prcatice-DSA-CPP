// for odd number of array
#include <iostream>
using namespace std;
class EvenNumber{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    public:
    void evenNumber(){
        for(int i=0; i<10; i++){
            if(arr[i]%2!=0){
          cout <<arr[i]<<" ";  
            }
        }
        cout <<endl;
    }
};
int main(){
EvenNumber obj;
obj.evenNumber();
return 0;
}