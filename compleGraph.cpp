#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Graph {
private:
    int vertex;
    list<pair<int, int>> *l; // (neighbor, weight)

    // DFS Helper Function
    void DFSHelper(int src, vector<bool> &visit) {
        visit[src] = true;
        cout << src << " ";

        for (auto neighbour : l[src]) {
            int v = neighbour.first;

            if (!visit[v]) {
                DFSHelper(v, visit);
            }
        }
    }

public:
    Graph(int v) {
        vertex = v;
        l = new list<pair<int, int>>[v];
    }

    // Add Edge
    void addEdge(int src, int dest, int weight) {
        l[src].push_back({dest, weight});
        l[dest].push_back({src, weight}); // Undirected Graph
    }

    // Print Adjacency List
    void printAdjacency() {
        cout << "\nAdjacency List\n";

        for (int i = 0; i < vertex; i++) {
            cout << i << " : ";

            for (auto neighbour : l[i]) {
                cout << "(" << neighbour.first
                     << "," << neighbour.second << ") ";
            }

            cout << endl;
        }
    }

    // BFS
    void BFSSearch(int start) {

        vector<bool> visit(vertex, false);
        queue<int> Q;

        visit[start] = true;
        Q.push(start);

        cout << "\nBFS Traversal\n";

        while (!Q.empty()) {

            int src = Q.front();
            Q.pop();

            cout << src << " ";

            for (auto neighbour : l[src]) {

                int v = neighbour.first;

                if (!visit[v]) {
                    visit[v] = true;
                    Q.push(v);
                }
            }
        }

        cout << endl;
    }

    // DFS
    void DFSSearch(int start) {

        vector<bool> visit(vertex, false);

        cout << "\nDFS Traversal\n";

        DFSHelper(start, visit);

        cout << endl;
    }

    // Dijkstra
    void Dijkstra(int start) {

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        vector<int> distance(vertex, INT_MAX);

        distance[start] = 0;

        pq.push({0, start});

        while (!pq.empty()) {

            int dist = pq.top().first;
            int node = pq.top().second;

            pq.pop();

            for (auto neighbour : l[node]) {

                int next = neighbour.first;
                int weight = neighbour.second;

                if (distance[next] > dist + weight) {

                    distance[next] = dist + weight;

                    pq.push({distance[next], next});
                }
            }
        }

        cout << "\nShortest Distance from Vertex "
             << start << endl;

        for (int i = 0; i < vertex; i++) {
            cout << start << " -> " << i
                 << " = " << distance[i] << endl;
        }
    }
};

int main() {

    Graph obj(6);

    obj.addEdge(0, 1, 4);
    obj.addEdge(0, 2, 2);
    obj.addEdge(1, 2, 1);
    obj.addEdge(1, 3, 5);
    obj.addEdge(2, 3, 8);
    obj.addEdge(2, 4, 10);
    obj.addEdge(3, 4, 2);
    obj.addEdge(3, 5, 6);
    obj.addEdge(4, 5, 3);

    obj.printAdjacency();

    obj.BFSSearch(0);

    obj.DFSSearch(0);

    obj.Dijkstra(0);

    return 0;
}
