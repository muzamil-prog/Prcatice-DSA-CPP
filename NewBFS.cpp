#include <iostream>
#include <list>
#include<vector>
#include <queue>
using namespace std;
class BFS{
    private:
    int vertex;
    list<int> *l;
    public:
    BFS(int v){
        vertex=v;
        l=new list<int> [v];
    }
    void addEdge(int src, int dest){
        l[src].push_back(dest);
        l[dest].push_back(src);
    }
    void printadjance(){
        for(int i=0; i<vertex; i++){
            cout <<i<<": ";
            for(int negb: l[i]){
                cout <<negb<<" ";
            }
            cout <<endl;
        }
    }
    void BFSSearch(int start){
        queue<int> Q;
         vector<bool> visit(vertex, false);
         Q.push(start);
         visit[start]=true; 
         while(Q.size()>0){
          int src=Q.front();
          Q.pop();
          cout <<src<<endl;
          for(int v: l[src]){
            if(!visit[v]){
                visit[v]=true;
                Q.push(v);
            }
          }

         cout <<endl;
            
         }
         

        
    }
};
int main(){
    BFS obj(6);
    obj.addEdge(0,1);
    obj.addEdge(0,2);
    obj.addEdge(1,3);
    obj.addEdge(1,4);
    obj.addEdge(3,5);
    obj.printadjance();
    obj.BFSSearch(0);
    return 0;

}