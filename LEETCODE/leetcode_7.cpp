// 7 -> https://leetcode.com/problems/reverse-integer/

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
int reverse(int x)
{
    int rev = 0;
    while (x != 0) 
    {
        int pop = x % 10;
        x /= 10;
        // the values 7 and -8 are in accordance to bits. [-2^b , 2^b-1]
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) 
            return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) 
            return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}
void solution() 
{
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
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
