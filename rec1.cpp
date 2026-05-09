#include <iostream>
using namespace std;
class Rec{
    public:
    void printNum(int n){
        if(n==1){
            cout <<1<<endl;
            return ;
        }
        cout <<n<<endl;
        printNum(n-1);
    }
};
int main(){
    Rec obj;
    obj.printNum(4);
    reutrn 0;
}