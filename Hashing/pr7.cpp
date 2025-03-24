/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 */


/*#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())  // Early exit if lengths don't match
        return false;

    unordered_map<char, int> mp;

    // Count character frequencies in 's'
    for (char x : s) {
        mp[x]++;
    }

    // Subtract character frequencies using 't'
    for (char x : t) {
        mp[x]--;
    }

    // Check if all values in the map are zero
    for (auto it : mp) {
        if (it.second != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
*/


/*python*/


/*
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        counts = defaultdict(int)
        n = len(s)

        for i in range(n):
            counts[s[i]] += 1
            counts[t[i]] -= 1

        for count in counts.values():
            if count != 0:
                return False

        return True*/