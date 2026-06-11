#include <iostream>
using namespace std;
class graph{
    private:
    static const int v=4;
    char vertex[v]={'A', 'B', 'C', 'D'};
    int adjanceMatrix[v][v]={
        {0,1,0,1},
        {1,0,1,1},
        {0,0,1,1},
        {1,1,0,0}
    };
    public:
    void printVertex(){
        for(int i=0; i<v; i++){
            cout <<vertex[i]<<" ";
        }
        cout <<endl;
    }
    void printMatrix(){
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                cout <<adjanceMatrix[i][j]<<" ";
            }
            cout <<endl;
        }
    }
};
int main(){
    graph obj;
    obj.printMatrix();
    obj.printVertex();
}