class Solution {
public:
    set<pair<int,int>> mp;

    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || j < 0 ||
            i >= grid.size() ||
            j >= grid[i].size() ||
            grid[i][j] == '0' ||
            mp.find({i,j}) != mp.end()) {
            return;
        }

        mp.insert({i,j});

        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {

                if (grid[i][j] == '1' &&
                    mp.find({i,j}) == mp.end()) {

                    count++;
                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};