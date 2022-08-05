//695 -> https://leetcode.com/problems/max-area-of-island/

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
int AreaIsland(vector<vector<int>>&grid, int i, int j)
{
    if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1)
    {
        grid[i][j] = 0;
        return 1 + AreaIsland(grid, i+1,j) + AreaIsland(grid, i,j+1) + AreaIsland(grid, i-1,j) + AreaIsland(grid, i,j-1);
    }
    return 0;
}
int maxAreaOfIsland(vector<vector<int>>& grid) 
{
    int nMaxArea = 0;
    for(int i=0; i<grid.size(); i++)
    {
        for(int j=0; j<grid[0].size(); j++)
        {
            if(grid[i][j] == 1)
                nMaxArea = max(nMaxArea, AreaIsland(grid, i, j));
        }
    }
    return nMaxArea;
}

void solution() 
{
    vector<vector<int>> nInput;
    int m, n;
    cin>>m>>n;
    int nInputBinary;
    for(int i=0;i<m;i++)
    {
        vector<int> row;
        for(int j=0; j<n;j++)
        {
            cin>>nInputBinary;
            row.push_back(nInputBinary);
        }
        nInput.push_back(row);
        row.clear();
    }
    cout<<maxAreaOfIsland(nInput)<<endl;
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