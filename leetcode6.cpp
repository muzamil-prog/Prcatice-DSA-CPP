#include <iostream>
using namespace std;
class solution{
    public:
    int price[7]={7,1,2,3,4,5,6};
    int n=7;
    void show(){
    int bye=price[0];
    int proft=0;
    for(int i=1; i<n; i++){
        if(bye>=price[i]){
            bye=min(bye, price[i]);

        }
         proft =(proft, price[i]-bye);


    }
    cout <<"the maximum profit is:"<< proft<<endl;
}
};
int main(){
    solution obj;
    obj.show();
}