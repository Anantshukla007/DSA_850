/*Input: s = “forgeeksskeegfor” 
Output: “geeksskeeg”
Explanation: There are several possible palindromic substrings like “kssk”, “ss”, “eeksskee” etc. But the substring “geeksskeeg” is the longest among all.


Input: s = “Geeks” 
Output: “ee”


Input: s = “abc” 
Output: “a”

Input: s = “” 
Output: “”*/


/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll; 

int dp[500][500]; 

int main() {
    string s; 
    cin >> s;  
    int n = s.size();
    if (n == 0) {  // Handle empty string case
        cout << "" << endl;
        return 0;
    }
    
    int i, j; 
    int max_length = 1, start = 0;  // To track the longest palindrome
    
    // Initialize all single-character substrings as palindromes
    for (i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    
    // Check for two-character palindromes
    for (i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            max_length = 2;
        }
    }
    
    // Check for palindromes of length 3 or more
    for (int length = 3; length <= n; length++) {
        for (i = 0; i < n - length + 1; i++) {
            j = i + length - 1;  // End index
            
            if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
                dp[i][j] = 1;
                start = i;
                max_length = length;
            }
        }
    }
    
    // Extract and print the longest palindromic substring
    cout << s.substr(start, max_length) << endl;
    
    return 0;
}
*/


/*def longest_palindromic_substring(s: str) -> str:
    n = len(s)
    if n == 0:
        return ""
    
    dp = [[0] * n for _ in range(n)]
    start, max_length = 0, 1  # Track the starting index and length of the longest palindrome

    # Single-character substrings are palindromes
    for i in range(n):
        dp[i][i] = 1

    # Check for two-character palindromes
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            dp[i][i + 1] = 1
            start = i
            max_length = 2

    # Check for palindromes of length 3 or more
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1  # End index
            
            if s[i] == s[j] and dp[i + 1][j - 1] == 1:
                dp[i][j] = 1
                start = i
                max_length = length

    return s[start:start + max_length]

# Example usage
print(longest_palindromic_substring("forgeeksskeegfor"))  # Output: "geeksskeeg"
print(longest_palindromic_substring("Geeks"))            # Output: "ee"
print(longest_palindromic_substring("abc"))              # Output: "a"
print(longest_palindromic_substring(""))                 # Output: ""
*/