/*In one operation, you can replace the character at any position with the next or previous letter in the alphabet (wrapping around so that 'a' is after 'z'). For example, replacing 'a' with the next letter results in 'b', and replacing 'a' with the previous letter results in 'z'. Similarly, replacing 'z' with the next letter results in 'a', and replacing 'z' with the previous letter results in 'y'.

Return the length of the longest palindromic subsequence of s that can be obtained after performing at most k operations.

 

Example 1:

Input: s = "abced", k = 2

Output: 3

Explanation:

Replace s[1] with the next letter, and s becomes "acced".
Replace s[4] with the previous letter, and s becomes "accec".
The subsequence "ccc" forms a palindrome of length 3, which is the maximum.

Example 2:

Input: s = "aaazzz", k = 4

Output: 6

Explanation:

Replace s[0] with the previous letter, and s becomes "zaazzz".
Replace s[4] with the next letter, and s becomes "zaazaz".
Replace s[3] with the next letter, and s becomes "zaaaaz".
The entire string forms a palindrome of length 6.*/



/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindromicSubsequence(string s, int k) {
        int n = s.size();

        // 3D DP table: dp[i][j][op] stores the longest palindromic subsequence 
        // in substring s[i:j] using at most 'op' modifications
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k + 1, 0)));

        // Base Case: Single character substrings are palindromes of length 1
        for (int i = 0; i < n; i++) {
            for (int op = 0; op <= k; op++) {
                dp[i][i][op] = 1;
            }
        }

        // Filling the DP table for increasing substring lengths
        for (int len = 2; len <= n; len++) { // Iterate over all possible substring lengths
            for (int i = 0; i + len - 1 < n; i++) { // Start index
                int j = i + len - 1; // End index

                for (int op = 0; op <= k; op++) { // Number of modifications available

                    // Case 1: Characters match, extend the palindrome
                    if (s[i] == s[j]) {
                        dp[i][j][op] = 2 + (i + 1 <= j - 1 ? dp[i + 1][j - 1][op] : 0);
                    } 
                    // Case 2: Characters do not match
                    else {
                        // Cost of converting one character to another
                        int cost = min(abs(s[i] - s[j]), 26 - abs(s[i] - s[j]));

                        // Option 1: Ignore one of the characters and take max LPS
                        dp[i][j][op] = max(dp[i + 1][j][op], dp[i][j - 1][op]);

                        // Option 2: Modify one of the characters if we have enough operations
                        if (op >= cost) {
                            dp[i][j][op] = max(dp[i][j][op], 
                                2 + (i + 1 <= j - 1 ? dp[i + 1][j - 1][op - cost] : 0));
                        }
                    }
                }
            }
        }

        // Final answer: longest palindromic subsequence in the whole string with at most k changes
        return dp[0][n - 1][k];
    }
};

// Driver code
int main() {
    Solution sol;
    string s = "abcde";
    int k = 2;
    cout << sol.longestPalindromicSubsequence(s, k) << endl; // Example test case
    return 0;
}
*/
//python///

/*class Solution:
    def longestPalindromicSubsequence(self, s: str, k: int) -> int:
        n = len(s)
        dp = [[[0] * (k + 1) for _ in range(n)] for _ in range(n)]
        
        # Base case: Single character subsequence is a palindrome of length 1
        for i in range(n):
            for op in range(k + 1):
                dp[i][i][op] = 1

        # Fill DP table for increasing substring lengths
        for length in range(2, n + 1):
            for i in range(n - length + 1):
                j = i + length - 1
                for op in range(k + 1):
                    if s[i] == s[j]: 
                        dp[i][j][op] = 2 + (dp[i + 1][j - 1][op] if i + 1 <= j - 1 else 0)
                    else:
                        cost = min(abs(ord(s[i]) - ord(s[j])), 26 - abs(ord(s[i]) - ord(s[j])))
                        dp[i][j][op] = max(dp[i + 1][j][op], dp[i][j - 1][op])
                        if op >= cost:
                            dp[i][j][op] = max(dp[i][j][op], 2 + (dp[i + 1][j - 1][op - cost] if i + 1 <= j - 1 else 0))

        return dp[0][n - 1][k]
*/