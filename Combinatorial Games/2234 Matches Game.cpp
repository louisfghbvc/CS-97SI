#include <iostream>
#include <vector>  
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  

void solve(int _){  
    // goal: give a array that length is m, each pile can peak any arbitrary nubmer
    // determine the winner
    // idea: nim game, xor all of then if not zero win

    int m;
    while (cin >> m) {
        vector<int> arr(m);
        for (int i = 0; i < m; ++i)
            cin >> arr[i];  

        int val = 0;
        for (int i = 0; i < m; ++i)
            val ^= arr[i];

        if (val)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
  
int main()  
{  
    Fast;
    // louisfghbvc
        solve(1);
    return 0;
}
