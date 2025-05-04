class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1'){//out of bound
            return;
        }
      
        grid[i][j]='$'; //mark visited
        dfs(grid,i+1,j,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i,j-1,m,n);

    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int island=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){//jaise he 1 mile ek island toh hai
                    island++; //baki uski continutation hongr
                    dfs(grid,i,j,m,n); //unke liye dfs call
                }
            }
        }
        return island;
    }
};