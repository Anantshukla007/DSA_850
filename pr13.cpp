/*You are given an array of strings words. Each element of words consists of two lowercase English letters.

Create the longest possible palindrome by selecting some elements from words and concatenating them in any order. Each element can be selected at most once.

Return the length of the longest palindrome that you can create. If it is impossible to create any palindrome, return 0.

A palindrome is a string that reads the same forward and backward.

 

Example 1:

Input: words = ["lc","cl","gg"]
Output: 6
Explanation: One longest palindrome is "lc" + "gg" + "cl" = "lcggcl", of length 6.
Note that "clgglc" is another longest palindrome that can be created.
Example 2:

Input: words = ["ab","ty","yt","lc","cl","ab"]
Output: 8
Explanation: One longest palindrome is "ty" + "lc" + "cl" + "yt" = "tylcclyt", of length 8.
Note that "lcyttycl" is another longest palindrome that can be created.
Example 3:

Input: words = ["cc","ll","xx"]
Output: 2
Explanation: One longest palindrome is "cc", of length 2.
Note that "ll" is another longest palindrome that can be created, and so is "xx*/


/*#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(vector<string>& words) {
    unordered_map<string, int> freq;
    int ans = 0;
    bool hasMiddle = false;

    // Count occurrences of each word
    for (auto& word : words) {
        freq[word]++;
    }

    for (auto& [word, count] : freq) {
        string rev = string({word[1], word[0]}); // Reverse the word

        if (word == rev) { // Case: "aa", "bb", "cc"
            if (count % 2 == 0) {
                ans += count * 2; // Use all occurrences
            } else {
                ans += (count - 1) * 2; // Use even occurrences
                hasMiddle = true; // Keep one for the center
            }
        } else if (freq.count(rev)) { // Case: "ab" & "ba"
            ans += min(count, freq[rev]) * 4;
            freq[rev] = 0; // Mark as processed
        }
    }

    if (hasMiddle) ans += 2; // Add the middle element if available

    return ans;
}

int main() {
    vector<string> words = {"lc", "cl", "gg"};
    cout << longestPalindrome(words) << endl; // Output: 6

    words = {"ab", "ty", "yt", "lc", "cl", "ab"};
    cout << longestPalindrome(words) << endl; // Output: 8

    words = {"cc", "ll", "xx"};
    cout << longestPalindrome(words) << endl; // Output: 2

    return 0;
}
*/

/*python*/

/*from collections import Counter

def longestPalindrome(words):
    freq = Counter(words)  # Count occurrences of each word
    ans = 0
    has_middle = False

    for word in list(freq.keys()):
        rev = word[::-1]  # Reverse the word

        if word == rev:  # Case: "aa", "bb", "cc"
            if freq[word] % 2 == 0:
                ans += freq[word] * 2
            else:
                ans += (freq[word] - 1) * 2
                has_middle = True
        elif rev in freq:  # Case: "ab" and "ba"
            ans += min(freq[word], freq[rev]) * 4
            del freq[rev]  # Remove the reversed word to avoid duplicate processing

    if has_middle:
        ans += 2  # Add center element if available

    return ans

# Example test cases
words1 = ["lc", "cl", "gg"]
print(longestPalindrome(words1))  # Output: 6

words2 = ["ab", "ty", "yt", "lc", "cl", "ab"]
print(longestPalindrome(words2))  # Output: 8

words3 = ["cc", "ll", "xx"]
print(longestPalindrome(words3))  # Output: 2
*/