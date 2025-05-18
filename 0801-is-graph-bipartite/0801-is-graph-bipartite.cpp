class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>color(V,-1); //mark -1 for no color
        //since graph is diconnected we will check for -1 visited nodes
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                queue<int>q;
                q.push(i); //from ith node it will start
                color[i]=0;

                while(!q.empty()){ //bfs will begin
                    int node=q.front();
                    q.pop();
                    //neighbor color check
                    for(auto nei:graph[node]){
                        //agr color nhi
                        if(color[nei]==-1){
                            //oop color kro
                            color[nei]=!color[node];//imppp
                            //push krdo
                            q.push(nei);
                            //agr color same hai node ke toh false
                        }else if(color[nei]==color[node]){
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};