// 31 -> https://leetcode.com/problems/next-permutation/

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
void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
void reverse(vector<int> &nums, int start)
{
    int i = start;
    int j = nums.size() - 1;
    while(i<j)
    {
        swap(nums, i, j);
        i++;
        j--;
    }
}
void nextPermutation(vector<int>& nums) 
{
    int i = nums.size() - 2;
    while(i>=0 && nums[i+1]<=nums[i])
    {
        i--;
    }
    if(i>=0)
    {
        int j = nums.size()-1;
        while(nums[j] <= nums[i])
            j--;
        swap(nums, i, j);
    }
    reverse(nums, i+1);
}
void solution() 
{
    int n;
    cin>>n;
    vector<int> nums1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums1.push_back(k);
    }
    nextPermutation(nums1);
    for(int i=0;i<n;i++)
    {
        cout<<nums1[i];
    }
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