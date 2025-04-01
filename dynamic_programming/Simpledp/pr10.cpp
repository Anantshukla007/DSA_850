/*Given two arrays; a and b -> you can start at index 1 from any array and end your journey at index n on an array 

-> If you are at i you can can jump to i+1 on same array or different array 

-> -1000000000 <= a[i],b[i]<= 10000000000 

-> Please output total number of journeys which have even sum and total number of journeys which have odd sum;



*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(2, 0)));
    // dp[i][0][0] -> even sum ending at a[i]
    // dp[i][0][1] -> odd sum ending at a[i]
    // dp[i][1][0] -> even sum ending at b[i]
    // dp[i][1][1] -> odd sum ending at b[i]

    // Base case
    dp[0][0][a[0] % 2] = 1;
    dp[0][1][b[0] % 2] = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] % 2 == 0) {
            dp[i][0][0] = dp[i - 1][0][0] + dp[i - 1][1][0];
            dp[i][0][1] = dp[i - 1][0][1] + dp[i - 1][1][1];
        } else {
            dp[i][0][1] = dp[i - 1][0][0] + dp[i - 1][1][0];
            dp[i][0][0] = dp[i - 1][0][1] + dp[i - 1][1][1];
        }

        if (b[i] % 2 == 0) {
            dp[i][1][0] = dp[i - 1][0][0] + dp[i - 1][1][0];
            dp[i][1][1] = dp[i - 1][0][1] + dp[i - 1][1][1];
        } else {
            dp[i][1][1] = dp[i - 1][0][0] + dp[i - 1][1][0];
            dp[i][1][0] = dp[i - 1][0][1] + dp[i - 1][1][1];
        }
    }

    int even_count = dp[n - 1][0][0] + dp[n - 1][1][0];
    int odd_count = dp[n - 1][0][1] + dp[n - 1][1][1];

    cout << even_count << " " << odd_count << endl;

    return 0;
}
*/


///python/////

/*def count_even_odd_journeys(n, a, b):
    dp = [[[0, 0] for _ in range(2)] for _ in range(n)]
    # dp[i][0][0] -> even sum ending at a[i]
    # dp[i][0][1] -> odd sum ending at a[i]
    # dp[i][1][0] -> even sum ending at b[i]
    # dp[i][1][1] -> odd sum ending at b[i]

    # Base case
    dp[0][0][a[0] % 2] = 1
    dp[0][1][b[0] % 2] = 1

    for i in range(1, n):
        if a[i] % 2 == 0:
            dp[i][0][0] = dp[i - 1][0][0] + dp[i - 1][1][0]
            dp[i][0][1] = dp[i - 1][0][1] + dp[i - 1][1][1]
        else:
            dp[i][0][1] = dp[i - 1][0][0] + dp[i - 1][1][0]
            dp[i][0][0] = dp[i - 1][0][1] + dp[i - 1][1][1]

        if b[i] % 2 == 0:
            dp[i][1][0] = dp[i - 1][0][0] + dp[i - 1][1][0]
            dp[i][1][1] = dp[i - 1][0][1] + dp[i - 1][1][1]
        else:
            dp[i][1][1] = dp[i - 1][0][0] + dp[i - 1][1][0]
            dp[i][1][0] = dp[i - 1][0][1] + dp[i - 1][1][1]

    even_count = dp[n - 1][0][0] + dp[n - 1][1][0]
    odd_count = dp[n - 1][0][1] + dp[n - 1][1][1]

    return even_count, odd_count


# Input
n = int(input())
a, b = [], []
for _ in range(n):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)

even_count, odd_count = count_even_odd_journeys(n, a, b)
print(even_count, odd_count)
*/