// 64 -> https://leetcode.com/problems/minimum-path-sum/

# include <iostream>
# include <utility>
# include <iterator>
# include <string>
# include <stdio.h>
# include <map>
# include <unordered_map>
# include <algorithm>
# include <queue>
# include <vector>
# include <climits>
# include <cstring>
# include <set>
# include <unordered_set>
# include <sstream>
# include <deque>
# include <bitset>
# include <functional>
# include <numeric>
# include <stack>
# include <limits>
# include <time.h>
# include <math.h>
# include <stdlib.h>
# include <assert.h>

using namespace std;

# define LIMIT 50
# define LL long long
# define LD long double
 
/* ========== YOUR CODE HERE ========= */
int minPathSumHelper(vector<vector<int>>& grid, int row, int col)
{
    if(row == 0 && col == 0) 
        return grid[row][col]; // exit point of the recursion
    if(row == 0) 
        return grid[row][col] + minPathSumHelper(grid, row, col - 1); //first row reached. move vt
    if(col == 0) 
        return grid[row][col] + minPathSumHelper(grid, row - 1, col); //first col reached. move hz
    
    // min of vt and hz
    return grid[row][col] + min(minPathSumHelper(grid, row - 1, col), minPathSumHelper(grid, row, col - 1)); 
}
int minPathSumDP(vector<vector<int>>& grid)
{
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));
    
    dp[0][0] = grid[0][0];
    for(int i=1;i<grid.size();i++)
        dp[i][0] = dp[i-1][0] + grid[i][0];
    for(int i=1;i<grid[0].size();i++)
        dp[0][i] = dp[0][i-1] + grid[0][i];
    for(int i=1;i<grid.size();i++)
    {
        for(int j=1;j<grid[0].size();j++)
        {
            dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[grid.size()-1][grid[0].size()-1];
}

void solution() 
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> nums;
    vector<int> inpCol;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int i1;
            cin>>i1;
            inpCol.push_back(i1);
        }
        nums.push_back(inpCol);
        inpCol.clear();
    }
    cout<< minPathSumDP(nums)<<endl;
    cout<< minPathSumHelper(nums, nums.size()-1, nums[0].size()-1)<<endl;    
}
/* ========== YOUR CODE HERE ========= */
int main() 
{
    int t = 1;
    while(t--) 
    {
        solution();
    }
    return 0;
}