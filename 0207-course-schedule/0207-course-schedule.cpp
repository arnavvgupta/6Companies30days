//basically has cycle in dfs

class Solution {
public:
    bool checkcycle(int node,vector<bool>& visited,vector<bool>& dfsvisited,unordered_map<int,vector<int>>& adj){
        visited[node]=true;
        dfsvisited[node]=true;
        
        for(auto negh:adj[node]){
            if(!visited[negh]){
                bool check=checkcycle(negh,visited,dfsvisited,adj);
                if(check){
                    return true;
                }
            }
            else if(dfsvisited[negh]){
                return true;
            }
        }
        dfsvisited[node]=false;
        return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            
            adj[u].push_back(v);
        }
        vector<bool> visited(n,false);
        vector<bool> dfsvisited(n,false);
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                bool cycle=checkcycle(i,visited,dfsvisited,adj);
                if(cycle){
                    return false;
                }
            }
        }
        return true;
    }
    
};