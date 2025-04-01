/*A string is said to be a interspace string if the absolute difference of the ASCII values of every pair of adjacent characters is at most
For example "abac" is a k-interspace string for 22 since the absolute difference between every adjacent character of it is at most
2. A substring is any group of contiguous characters in a string. For example, the substrings of abefabic, at be a h d. A substring of a string is said to be interspace substring if the substring is a k-interspace string
Given a string, word, and an integer, & find the longest k-interspace substring within word, if there are multiple substrings of the longest length, return the one that occurs first in word
For example:
word-wedding
4-0
The first occurring longest interspace substring is did
word ababbacaabbbb
There are two interspace substrings of length & ababba and aabbbb. The one that occurs first is ababba*/


/*#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    int n = s.length();
    vector<int> dp(n, 1);
    int max_len = 1, max_index = 0;

    for (int i = 1; i < n; i++) {
        if (abs(s[i] - s[i - 1]) <= k) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 1;
        }

        if (dp[i] > max_len) {
            max_len = dp[i];
            max_index = i;
        }
    }

    int start_index = max_index - max_len + 1;
    cout << s.substr(start_index, max_len) << endl;

    return 0;
}
*/


/*def longest_substring(s: str, k: int) -> str:
    n = len(s)
    dp = [1] * n
    max_len = 1
    max_index = 0

    for i in range(1, n):
        if abs(ord(s[i]) - ord(s[i - 1])) <= k:
            dp[i] = dp[i - 1] + 1
        else:
            dp[i] = 1

        if dp[i] > max_len:
            max_len = dp[i]
            max_index = i

    start_index = max_index - max_len + 1
    return s[start_index:start_index + max_len]

# Input handling
s = input().strip()
k = int(input())
print(longest_substring(s, k))
*/



/*def longest_substring(s: str, k: int) -> str:
    n = len(s)
    dp = [1] * n
    max_len = 1
    max_index = 0

    for i in range(1, n):
        if abs(ord(s[i]) - ord(s[i - 1])) <= k:
            dp[i] = dp[i - 1] + 1
        else:
            dp[i] = 1

        if dp[i] > max_len:
            max_len = dp[i]
            max_index = i

    start_index = max_index - max_len + 1
    return s[start_index:start_index + max_len]

# Input handling
s = input().strip()
k = int(input())
print(longest_substring(s, k))
*/