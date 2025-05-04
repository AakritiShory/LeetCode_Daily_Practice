class Solution {
public:
     int m;
     int n;
     int peri;
    void dfsRecur(vector<vector<int>>& grid,int i,int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){//islamd se bahr ho gye
            peri++;//vaha ek wall rahegi toh usse++;
            return;
        }
        if(grid[i][j]==-1){//humne vis kr rakha hai already toh return
            return;
        }
        grid[i][j]= -1; //mark as visited agr 0 nhi -1 nhi toh 1 hoga mark
                         //vis
        //4 neighbors
        dfsRecur(grid,i+1,j);
        dfsRecur(grid,i-1,j);
        dfsRecur(grid,i,j+1);
        dfsRecur(grid,i,j-1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        peri=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){ //jaise he 1 dikha
                    dfsRecur(grid,i,j);
                    return peri;//jo dfs ke through count store kiya voh
                }
            }
        }
        return -1;
    }
};