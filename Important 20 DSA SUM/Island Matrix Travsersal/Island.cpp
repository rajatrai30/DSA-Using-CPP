#include<iostream>
#include<vector>
using namespace std;

// using dfs func
void dfs(vector<vector<char>>& grid, int i, int j){
    // if the current cell is out of bonds or is the water, return.
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == '0'){
        return;
    }
    // set the current cell to water
    grid[i][j] = '0';
    // call dfs on all 4 directions
    dfs(grid, i+1, j);
    dfs(grid, i-1, j);
    dfs(grid, i, j+1);
    dfs(grid, i, j-1);
}

int numIslands(vector<vector<char>>& grid){
    // if the grid is empty, return 0
    if(grid.empty()){
        return 0;
    }
    int numIslands = 0;
    // loop through the grid
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            // if the current cell is land, increment the number of islands and call dfs
            if(grid[i][j] == '1'){
                dfs(grid, i, j);
                numIslands++; 
            }
        }
    }
    return numIslands;
}

int main(){
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    cout << "Number of islands: " << numIslands(grid) << endl;
    return 0;
}