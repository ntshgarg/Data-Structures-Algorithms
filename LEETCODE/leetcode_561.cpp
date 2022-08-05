
//561 -> https://leetcode.com/problems/array-partition-i/

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

# define LL long long
# define LD long double

/* ========== YOUR CODE HERE ========= */
int arrayPairSum(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i=0;i<nums.size();i+=2)
        ans+=nums[i];
    return ans;
}
void solution() 
{
    int n;
    cin>>n;
    vector<int> nums;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        nums.push_back(k);
    }
    cout<<arrayPairSum(nums);
}

/* ========== YOUR CODE HERE ========= */

int main() 
{
    int t = 10000;
    cin>>t;
    while(t--) 
    {
        solution();
    }
    return 0;
}