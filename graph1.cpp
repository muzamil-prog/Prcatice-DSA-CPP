#include <iostream>
using namespace std;
class graph{
    private:
    static const int v=4;
    char vertexData[v]={'A', 'B', 'C', 'D'};
    int adjenceMatrix[v][v]={
        {1,1,1,0},
        {1,0,1,0},
        {1,1,0,0},
        {0,0,0,1}
    };
    }
public:
void printVertex(){
    for(int i=0; i<v; i++){
        cout<<vertexData[i]<<" ";
    }
    cout <<endl;
}
void printAdjance(){
    cout <<"print the adjance matrix:"<<endl;
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            cout <<adjenceMatrix[i][j]<<" ";
        }
        cout <<endl;
    }
}
};
int main(){
    graph obj;
    obj.printVertex();
    obj.printAdjance();
    return 0;
}