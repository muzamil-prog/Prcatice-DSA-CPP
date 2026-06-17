#include <iostream>
using namespace std;
class insert{
    public:
    void sort(int arr[5], int size){
        for(int i=0; i<size; i++){
            int key=i+1;
            int current=i;
            while(key>0 && arr[current]> arr[key]){
                arr[key+1]=arr[key];
            }

            key[key+1]=current;
        }
    }
    void print(int arr[5], int size){
        for(int i=0; i<n; i++){
            cout <<i<<" ";
        }
        cout <<endl;
    }
};
int main()
{
    insert obj;
    int arr[5]={3,1,2,5,4};
    int size=5;
    obj.sort(arr, size);
    obj.print(arr, size);
    return 0;
}