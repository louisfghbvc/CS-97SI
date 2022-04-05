#include <iostream>
#include <vector>  
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  

void solve(int _){  
    // goal: give a cycle
    // each time can remove one or adjacent numbers
    // dertermine the winner

    // idea: grundy number
    // two state -> two game, cycle, no cycle
    // if no cycle
    // n 0 1 2 3 4 5 6
    // g 0 1 2 3 1 4 3 
    // see no cycle -> g > 0
    // so from cycle to no cycle, the mex is always 0

    int n;
    while (cin >> n, n) {
        if (n <= 2) cout << "Alice\n";
        else cout << "Bob\n";
    }
}
  
int main()  
{  
    Fast;
    // louisfghbvc
        solve(1);
    return 0;
}
