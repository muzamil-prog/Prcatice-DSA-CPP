#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100];

void bfs(int start){

    bool visited[100]={false};

    queue<int> q;

    visited[start]=true;

    q.push(start);

    while(!q.empty()){

        int node=q.front();
        q.pop();

        cout<<node<<" ";

        for(int child:graph[node]){

            if(!visited[child]){

                visited[child]=true;
                q.push(child);

            }

        }

    }

}

int main(){

    graph[1].push_back(2);
    graph[1].push_back(3);

    graph[2].push_back(4);
    graph[2].push_back(5);

    bfs(1);

}