class Solution {
public:

    bool dfs(int node, int destination, vector<vector<int>>& mat, vector<bool>& visited){
        if (node == destination) return true;

        visited[node] = true;

        for(auto &i : mat[node]){
            if(!visited[i]) {
                if (dfs(i, destination, mat, visited)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> mat(n);
            for(auto &it : edges){
                int u = it[0];
                int v = it[1];
                mat[u].push_back(v);
                mat[v].push_back(u);

            }

            vector<bool> visited(n, false);

            return dfs(source, destination, mat, visited);

        
    }
};
//optimal Approach

    /*bool dfs(int node, int destination, vector<vector<int>>& adj, vector<bool>& visited){
        if (node == destination) return true;

        visited[node] = true;

        for(auto &neighbour : adj[node]){
            if(!visited[neighbour]) {
                if (dfs(neighbour, destination, adj, visited)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector<vector<int>> adj(n);

        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);

        return dfs(source, destination, adj, visited);
    }
};*/