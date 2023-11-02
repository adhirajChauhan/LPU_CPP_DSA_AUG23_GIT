#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <set>
using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<vector<int>> &adj){
    for(int i = 0; i < adj.size(); i++){
        int u = adj[i][0];
        int v = adj[i][1];

        adjList[u].insert(v);
    }
}

void bfs(unordered_map<int, set<int>> &adjList,unordered_map<int,
 bool> &visited,vector<int> &ans, int node){

    //1. save whatever is in the queue(first node) in frontNode and remove from queue
    //2.mark the removed element as true in visited array
    //3 store the element in ans vector
    //4. push all the adjacent/neighbour elements of frontNode in queue
    
    queue<int> q;
    q.push(node);
    visited[node] = true;
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        
        ans.push_back(frontNode);
        
        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
        
    }
    
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, adj);

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, 0);
        }
    }

    return ans;
    
}

int main(){
    vector<vector<int>> adj = {
        {0,1},
        {0,2},
        {0,3},
        {1,4},
        {1,7},
        {2,5},
        {3,6}
    };

    vector<int> result = bfsTraversal(8,adj);

    for(auto node : result){
        cout << node << " ";
    }
}