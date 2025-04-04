/*Given a binary string s, partition the string into one or more substrings such that each substring is beautiful.

A string is beautiful if:

It doesn't contain leading zeros.
It's the binary representation of a number that is a power of 5.
Return the minimum number of substrings in such partition. If it is impossible to partition the string s into beautiful substrings, return -1.

A substring is a contiguous sequence of characters in a string.

 

Example 1:

Input: s = "1011"
Output: 2
Explanation: We can paritition the given string into ["101", "1"].
- The string "101" does not contain leading zeros and is the binary representation of integer 51 = 5.
- The string "1" does not contain leading zeros and is the binary representation of integer 50 = 1.
It can be shown that 2 is the minimum number of beautiful substrings that s can be partitioned into.
Example 2:

Input: s = "111"
Output: 3
Explanation: We can paritition the given string into ["1", "1", "1"].
- The string "1" does not contain leading zeros and is the binary representation of integer 50 = 1.
It can be shown that 3 is the minimum number of beautiful substrings that s can be partitioned into.
Example 3:

Input: s = "0"
Output: -1
Explanation: We can not partition the given string into beautiful substrings.
 

Constraints:

1 <= s.length <= 15
s[i] is either '0' or '1'.
Copyright ©️ 2025 LeetCode All rights reserved
Users Accepted
3.2K
Users Tried
4.3K
Total Accepted
3.3K
Total Submissions
7.2K
C++




1
2
3
4
5
6
⌄
⌄
class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
        
    }
};
Saved
Ln 1, Col 1
1
2
3
"1011"
"111"
"0"
Source
3/8 testcases
Line 1
Case 1: s


Note: Please do not copy the description during the contest to maintain the integrity of your submissions.©leetcode*/



/*#include <bits/stdc++.h>
using namespace std;

// Helper function to check if a number is a power of 5
// It returns true if 'num' is at least 1 and repeatedly divisible by 5 until it becomes 1.
bool isPowerOf5(long long num) {
    if (num < 1) return false;
    while (num % 5 == 0)
        num /= 5;
    return num == 1;
}

class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
        int n = s.size();
        // dp[i] will store the minimum number of beautiful substrings needed to partition s[i...n-1]
        vector<int> dp(n + 1, INT_MAX);
        dp[n] = 0;  // Base case: an empty substring requires 0 partitions
        
        // Process the string from right to left
        for (int i = n - 1; i >= 0; i--) {
            // If the current character is '0', skip it because a valid substring cannot have a leading zero.
            if (s[i] == '0')
                continue;
                
            long long num = 0;
            // Try every possible substring starting at index i
            for (int j = i; j < n; j++) {
                // Build the number from the binary substring s[i...j]
                num = num * 2 + (s[j] - '0');
                
                // Check if this number is a power of 5
                if (isPowerOf5(num)) {
                    // If the substring is beautiful, update dp[i] if we can partition the rest of the string optimally.
                    if (dp[j + 1] != INT_MAX)
                        dp[i] = min(dp[i], 1 + dp[j + 1]);
                }
            }
        }
        
        // If dp[0] is still INT_MAX, no valid partition exists; otherwise, return the result.
        return dp[0] == INT_MAX ? -1 : dp[0];
    }
};

int main() {
    // Example usage:
    Solution sol;
    string s1 = "1011";
    cout << "Minimum partitions for \"" << s1 << "\": " << sol.minimumBeautifulSubstrings(s1) << endl; // Expected output: 2

    string s2 = "111";
    cout << "Minimum partitions for \"" << s2 << "\": " << sol.minimumBeautifulSubstrings(s2) << endl; // Expected output: 3

    return 0;
}
*/


/*class Solution:
    def minimumBeautifulSubstrings(self, s: str) -> int:
        n = len(s)
        # dp[i] will store the minimum number of beautiful substrings needed for s[i:]
        dp = [float('inf')] * (n + 1)
        dp[n] = 0  # Base case: an empty string requires 0 partitions
        
        # Helper function to check if an integer is a power of 5
        def isPowerOf5(x: int) -> bool:
            if x < 1:
                return False
            while x % 5 == 0:
                x //= 5
            return x == 1
        
        # Process the string backwards
        for i in range(n - 1, -1, -1):
            # Skip if current character is '0' (leading zero not allowed)
            if s[i] == '0':
                continue
            
            num = 0
            # Build the number from the binary substring s[i:j+1]
            for j in range(i, n):
                num = num * 2 + int(s[j])
                
                # If the current substring forms a beautiful number (power of 5)
                if isPowerOf5(num):
                    dp[i] = min(dp[i], 1 + dp[j + 1])
        
        # If dp[0] is infinite, partitioning isn't possible; otherwise, return the minimum partitions
        return dp[0] if dp[0] != float('inf') else -1

# Example usage:
sol = Solution()
print("Minimum partitions for '1011':", sol.minimumBeautifulSubstrings("1011"))  # Expected output: 2
print("Minimum partitions for '111':", sol.minimumBeautifulSubstrings("111"))    # Expected output: 3
*/