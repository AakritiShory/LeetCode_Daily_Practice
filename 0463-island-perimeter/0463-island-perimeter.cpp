class Solution {
public:
    void dfsRecur(vector<vector<int>>& grid, int i, int j, int& peri, int m, int n) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) {
            // Outside the island, contribute to perimeter
            peri++;
            return;
        }
        if (grid[i][j] == -1) {
            // Already visited
            return;
        }

        grid[i][j] = -1; // Mark as visited

        // Recurse for 4 directions
        dfsRecur(grid, i + 1, j, peri, m, n);
        dfsRecur(grid, i - 1, j, peri, m, n);
        dfsRecur(grid, i, j + 1, peri, m, n);
        dfsRecur(grid, i, j - 1, peri, m, n);
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int peri = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    dfsRecur(grid, i, j, peri, m, n);
                    return peri; // Only one island exists, so return immediately
                }
            }
        }
        return 0;
    }
};
