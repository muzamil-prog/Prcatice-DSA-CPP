// find unique value 
#include <iostream>
using namespace std;
class unique{
    int arr[10]={1,2,3,4,5,3,4,6,7,6};
    int size=10;
    public:
    void print(){
        for(int i=0; i<size; i++){
            bool printalready=false; // asume krta ha phly element print  nhi hova
            for(int j=0; j<i; j++){// inner loop check kry ga ky //phly waly element koi reapeat hove tu flag true or loop sy  bahr ajy gy simmple 
                if(arr[i]==arr[j]){
                    printalready=true;
                    break;
                }
            }
            if(!printalready){ // jo reapeat ho gy us ko skip yani flag agr true hova tu skip
                cout <<arr[i]<<"  ";
            }
            

        }
        cout <<endl;
    }
};
int main(){
    unique obj;
    obj.print();
    return 0;
}