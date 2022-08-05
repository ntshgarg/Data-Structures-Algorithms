// 33 -> https://leetcode.com/problems/search-in-rotated-sorted-array/

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
int search(vector<int>& nums, int target)
{
    // find the pivot point
    int n = nums.size();
    int low=0,high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(nums[mid]>nums[high]) 
            low=mid+1;
        else
            high=mid;
    }
    int rot=low;
    low=0;
    high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int realmid=(mid+rot)%n;
        if(nums[realmid]==target)
            return realmid;
        if(nums[realmid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
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
    int d;
    cin>>d;
    cout<<search(nums1, d)<<endl;
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