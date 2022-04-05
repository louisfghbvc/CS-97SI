#include <iostream>
#include <vector>  
#include <algorithm>
#include <map>
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  

map<long long, bool> dp;
long long n;
bool dfs(long long x) {
    map<long long, bool>::iterator it = dp.find(x);
    if (it != dp.end()) return it->second;

    bool &res = dp[x];
    for (int i = 2; i <= 9; ++i) {
        if (x * i >= n)
           return res = true;
        else if (!dfs(x * i))
            return res = true;
    }
    return res = false;
}

void solve(int _){  
    // goal: p is 1, reach until greater than n, that player win
    // each operation we can multiply 2~9

    // idea: dp, dp[i]: first player win or not
    while (cin >> n) {
        dp.clear();
        if (dfs(1))
            cout << "Stan wins.\n";
        else
            cout << "Ollie wins.\n";
    }

}
  
int main()  
{  
    Fast;
    // louisfghbvc
        solve(1);
    return 0;
}
