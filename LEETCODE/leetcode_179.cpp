// 179 -> https://leetcode.com/problems/largest-number/

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
string largestNumber(vector<int>& nums) 
{
    vector<string> vNums;
    for(int i=0; i<nums.size();i++)
        vNums.push_back(to_string(nums[i]));
    
    std::sort(vNums.begin(), vNums.end(), [](string& s1, string& s2){return s1+s2 > s2+s1;});
    string sAns = "";
    for(int i=0;i<vNums.size();i++)
        sAns += vNums[i];
    int i = 0;
    int len = sAns.length();
    while(i < len-1)
    {
        if(sAns[i]=='0')
            i++;
        else
            break;
    }
    
    return sAns.substr(i);
}
void solution() 
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    cout<<largestNumber(nums)<<endl;
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