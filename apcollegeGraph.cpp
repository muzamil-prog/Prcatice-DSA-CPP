#include <iostream>
#include <list>
using namespace std;
class graph{
    int V;
    list<int> *l; // dynamic list 
    public:
    graph(int V){
        this->V=V;
        l=new list<int> [V];// intailize the list 
        // array intailize arr=new int[V]

    }
    void addEdges(int u, int v){
     // assume u, and v
     l[u].push_back[V];
     l[v].push_back[V];
    }
    void printAdjance(){
        for(int i=0; i<V; i++){
            cout <<i<<" :";
            for(int negb: l[i]){
                cout <<negb<<" ";
            }
            cout <<endl;
        }
    }
};
int main(){
    graph obj(5);
    obj.addEdges(0,1);
    obj.addEdges(1,2);
    obj.addEdges(1,3);
    obj.addEdges(2,3);
    obj.addEdges(1,4);
    obj.printAdjance();
    return 0;
}