// 896 -> https://leetcode.com/problems/monotonic-array/

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
bool isIncreasing(vector<int>& nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i] > nums[i+1]) return false;
    }
    return true;
}
bool isDecreasing(vector<int>& nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i] < nums[i+1]) return false;
    }
    return true;
}
bool isMonotonic(vector<int>& nums) 
{
    return isIncreasing(nums) || isDecreasing(nums);        
}
void solution() 
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int i1;
        cin>>i1;
        nums.push_back(i1);
    }
    cout<<isMonotonic(nums)<<endl;
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