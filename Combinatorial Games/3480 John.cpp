#include <iostream>
#include <vector>  
#include <algorithm>
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  

void solve(int _){  
    // goal: give the array, say colors, and colors[i] amount
    // each player can choose one color, and choose some numbers.
    // if the player choose the last one, lose

    // idea: anti-nim
    // if all value is one, so if even, must win
    // if only 1 pile > 1
    // 1) if odd, make current 1, so that player1 win
    // 2) if even, choose all, make pile odd, so that player1 win
    // if at least 2 pile > 1
    // 1) XOR 0, 
    //   1.1) XOR != 0 and at least two piles > 1 -> go to (2)
    //   1.2) at least one piles > 1, next must win
    // 2) XOR != 0, but we can always change to (1)
    
    // rule: all one, that is just odd, even
    // or XOR > 0

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int val = 0;
    for (int i = 0; i < n; ++i)
        val ^= arr[i];
    int one = count(arr.begin(), arr.end(), 1);

    if (one == n) {
        if (n % 2 == 0)
            cout << "John\n";
        else
            cout << "Brother\n";
    }
    else {
        if (val)
            cout << "John\n";
        else
            cout << "Brother\n";
    }

}
  
int main()  
{  
    Fast;
    louisfghbvc
        solve(1);
    return 0;
}
