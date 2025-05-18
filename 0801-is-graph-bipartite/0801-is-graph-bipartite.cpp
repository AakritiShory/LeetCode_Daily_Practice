class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        //queue<int>q;
        vector<int>color(V,-1);
        // q.push(0);//start
        // color[0]=0; //say 0 and 1 color apne pass

        //disconected graph so i need for loop
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                queue<int>q;
                q.push(i);
                color[i]=0;
           
        while(!q.empty()){
            int node=q.front();
            q.pop();


            for(auto nei:graph[node]){
                //if adj node not yet color ,u give opp color of node
                if(color[nei]==-1){
                    color[nei]=!color[node];
                    q.push(nei);
                    //if node has same color ,return false
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