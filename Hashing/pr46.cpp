/*Good Binary Strings
Problem Statement
You are given a binary string S consisting of only 0's and 1's. A binary string is called good if it has an equal number of occurrences of the substring "01" and the substring "10". Note: These substrings may overlap.

For example, consider the binary string

Copy
Edit
1101001
This string is good because:

There are two occurrences of "01":

One from the substring 1101001 (the "01" starting at position 3)

Another from the substring 1101001 (the "01" starting at position 6)

There are two occurrences of "10":

One from the substring 1101001 (the "10" starting at position 2)

Another from the substring 1101001 (the "10" starting at position 5)

https://www.codechef.com/START66B/problems/GOODBINSTR

*/


/*#include <iostream>
#include <string>
using namespace std;

int countGoodFlips(const string &s) {
    int n = s.size();
    int count01 = 0, count10 = 0;
    
    // Compute global counts of "01" and "10"
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '1') count01++;
        if (s[i] == '1' && s[i + 1] == '0') count10++;
    }
    
    int validIndices = 0;
    
    // For each index, consider flipping s[i]
    for (int i = 0; i < n; i++) {
        // Store deltas for "01" and "10"
        int delta01 = 0, delta10 = 0;
        char flipped = (s[i] == '0') ? '1' : '0';
        
        // Check the left adjacent pair (if exists)
        if (i > 0) {
            // Before flip:
            if (s[i-1] == '0' && s[i] == '1') delta01 -= 1;
            if (s[i-1] == '1' && s[i] == '0') delta10 -= 1;
            // After flip:
            if (s[i-1] == '0' && flipped == '1') delta01 += 1;
            if (s[i-1] == '1' && flipped == '0') delta10 += 1;
        }
        
        // Check the right adjacent pair (if exists)
        if (i < n - 1) {
            // Before flip:
            if (s[i] == '0' && s[i+1] == '1') delta01 -= 1;
            if (s[i] == '1' && s[i+1] == '0') delta10 -= 1;
            // After flip:
            if (flipped == '0' && s[i+1] == '1') delta01 += 1;
            if (flipped == '1' && s[i+1] == '0') delta10 += 1;
        }
        
        // New counts after flipping s[i]
        int newCount01 = count01 + delta01;
        int newCount10 = count10 + delta10;
        
        if (newCount01 == newCount10) validIndices++;
    }
    
    return validIndices;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << countGoodFlips(s) << "\n";
    }
    return 0;
}
*/

//python ////

/*def count_good_flips(s: str) -> int:
    n = len(s)
    count_01 = 0
    count_10 = 0

    # Count global occurrences
    for i in range(n - 1):
        if s[i] == '0' and s[i+1] == '1':
            count_01 += 1
        if s[i] == '1' and s[i+1] == '0':
            count_10 += 1

    valid_indices = 0

    for i in range(n):
        delta01 = 0
        delta10 = 0
        flipped = '1' if s[i] == '0' else '0'

        # Left adjacent pair
        if i > 0:
            if s[i-1] == '0' and s[i] == '1':
                delta01 -= 1
            if s[i-1] == '1' and s[i] == '0':
                delta10 -= 1
            if s[i-1] == '0' and flipped == '1':
                delta01 += 1
            if s[i-1] == '1' and flipped == '0':
                delta10 += 1

        # Right adjacent pair
        if i < n - 1:
            if s[i] == '0' and s[i+1] == '1':
                delta01 -= 1
            if s[i] == '1' and s[i+1] == '0':
                delta10 -= 1
            if flipped == '0' and s[i+1] == '1':
                delta01 += 1
            if flipped == '1' and s[i+1] == '0':
                delta10 += 1

        new_count_01 = count_01 + delta01
        new_count_10 = count_10 + delta10

        if new_count_01 == new_count_10:
            valid_indices += 1

    return valid_indices

if __name__ == '__main__':
    import sys
    input_data = sys.stdin.read().split()
    T = int(input_data[0])
    idx = 1
    results = []
    for _ in range(T):
        s = input_data[idx]
        idx += 1
        results.append(str(count_good_flips(s)))
    print("\n".join(results))
*/