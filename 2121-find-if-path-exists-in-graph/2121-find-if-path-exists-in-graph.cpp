class Solution {
public:
    bool check(unordered_map<int,vector<int>>& mp,int s,int d,vector<bool>& vis){
        if(s==d) return true;
        //agr iss source pr aa chuke toh dobara nhi jaoge
        //loop mei fas jaoge 0-1,1-0
        if(vis[s]==true) return false;
        //agr nhi hai toh
        vis[s]=true;
        //ab iss soruce se kaha ja skte ho
        for(auto node:mp[s]){
            if(check(mp,node,d,vis)==true) return true;
        }
        return false;
    }
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
        return check(mp,source,destination,vis);
    }
};