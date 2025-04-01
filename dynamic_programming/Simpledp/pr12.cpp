/*Understanding :-> You are given 2 arrays ; travel from start to end; maximum maximum dollars ; whenever you try to jump from Array “A” to Array “B” you make no money :) 
*/


/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n, 0);
    vector<int> b(n, 0);
    vector<vector<int>> dp(n, vector<int>(2, 0));

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    dp[0][0] = a[0];
    dp[0][1] = b[0];

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + a[i];
        dp[i][1] = dp[i - 1][1] + b[i];

        if (i - 2 >= 0) {
            dp[i][0] = max(dp[i][0], dp[i - 2][1] + a[i]);
            dp[i][1] = max(dp[i][1], dp[i - 2][0] + b[i]);
        }
    }

    cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
    return 0;
}
*/



///python////


/*n = int(input())
a = [0] * (n + 1)
b = [0] * (n + 1)
dp = [[0, 0] for _ in range(100005)]

for i in range(1, n + 1):
    a[i] = int(input())

for i in range(1, n + 1):
    b[i] = int(input())

dp[1][0] = a[1]
dp[1][1] = b[1]

for i in range(2, n + 1):
    dp[i][0] = max(dp[i - 1][0] + a[i], dp[i - 2][1] + a[i])
    dp[i][1] = max(dp[i - 1][1] + b[i], dp[i - 2][0] + b[i])

print(dp[n][0], dp[n][1])
*/