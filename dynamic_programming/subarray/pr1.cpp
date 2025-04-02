/*Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".*/



/*#include <bits/stdc++.h>
using namespace std;

int dp[5000][5000];
int dp1[5000][5000]; // Fixed array size

int main() {
    string s;
    cin >> s;

    int n = s.size();

    // Base case initialization
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
        dp1[i][i] = 1;
    }

    // Two-character substrings
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
        }
        dp1[i][i + 1] = dp1[i][i] + dp1[i + 1][i + 1] + dp[i][i + 1];
    }

    // Expanding to larger substrings
    for (int length = 3; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
                dp[i][j] = 1;
            }
            dp1[i][j] = dp1[i][j - 1] + dp1[i + 1][j] - dp1[i + 1][j - 1] + dp[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--; // Convert to zero-based indexing
        cout << dp1[l][r] << "\n"; // Added newline for proper formatting
    }

    return 0;
}
*/

//python///



/*def count_palindromic_substrings(s, queries):
    n = len(s)
    
    # Initialize DP tables
    dp = [[0] * n for _ in range(n)]
    dp1 = [[0] * n for _ in range(n)]

    # Base case: Single character substrings are palindromes
    for i in range(n):
        dp[i][i] = 1
        dp1[i][i] = 1

    # Two-character substrings
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            dp[i][i + 1] = 1
        dp1[i][i + 1] = dp1[i][i] + dp1[i + 1][i + 1] + dp[i][i + 1]

    # Expanding to larger substrings
    for length in range(3, n + 1):  # Length starts from 3 up to n
        for i in range(n - length + 1):
            j = i + length - 1
            if s[i] == s[j] and dp[i + 1][j - 1] == 1:
                dp[i][j] = 1
            dp1[i][j] = dp1[i][j - 1] + dp1[i + 1][j] - dp1[i + 1][j - 1] + dp[i][j]

    # Answer queries
    results = []
    for l, r in queries:
        l -= 1  # Convert to zero-based indexing
        r -= 1
        results.append(dp1[l][r])
    
    return results


# Input handling
s = input().strip()
q = int(input().strip())
queries = [tuple(map(int, input().split())) for _ in range(q)]

# Compute results and print
results = count_palindromic_substrings(s, queries)
print("\n".join(map(str, results)))
*/
