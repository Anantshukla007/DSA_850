/*Select maximum sum subset from the two arrays such that no two elements are consecutive.Select maximum sum subset from the two arrays such that no two elements are consecutive.*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    vector<int> dp(n + 1); // Change from dp(n) to dp(n+1)

    dp[0] = 0; // Base case (no elements taken)
    dp[1] = max(a[0], b[0]);

    for (int i = 2; i <= n; i++) {
        int x = dp[i - 2] + a[i - 1]; // Adjusted for 1-based indexing
        int y = dp[i - 2] + b[i - 1];
        dp[i] = max({x, y, dp[i - 1]});
    }

    cout << dp[n] << endl; // dp[n] instead of dp[n-1]
    return 0;
}
*
/



///python///////
def max_sum(n, a, b):
    dp = [0] * (n + 1)  # Use dp[n+1] for 1-based indexing

    dp[1] = max(a[0], b[0])

    for i in range(2, n + 1):
        x = dp[i - 2] + a[i - 1]
        y = dp[i - 2] + b[i - 1]
        dp[i] = max(x, y, dp[i - 1])

    return dp[n]

# Input handling
n = int(input())
a, b = [], []
for _ in range(n):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)

# Output result
print(max_sum(n, a, b))
