class Solution {
public:
   
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //adjacency list
        unordered_map<int,vector<int>>mp;
        //iterate kro edges ke vectir mei

        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            //bidirectional graph given
            mp[u].push_back(v); //u se v bhi edge
            mp[v].push_back(u); //v se u bhi edge
        }
        vector<bool> vis(n,false);

        queue<int> q;
        q.push(source);
        vis[source]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination) return true; //imp
            for(auto i:mp[node]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
            }

        }
        return false;
       
    }
};