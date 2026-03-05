#include <iostream>
#include <vector>
using namespace std;
class findIndex{
    private:
    vector<int> vec={2,4,5,6,6,7,};
    int findd=6;
    public:
    void find(){
        for(int i=0; i<vec.size(); i++){
            if(vec[i]==findd){
                cout << findd<<"find at index is:"<<i<<endl;
                return ;
            }else{
                cout <<"not found:";
            }
        }

    }
};
int main(){
findIndex obj;
obj.find();
return 0;    
}