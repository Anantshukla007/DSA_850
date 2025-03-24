/*Understanding :-> We will give you a string only consisting of “a” and “b” ; now convert it to a string such that there is no subset like “bab” or “aba” ; do this in minimum cost ; 

Cost : 1 for flipping a into b or b into a. 

Observation-> We have to convert the given string -> valid string 
-> It means you should know what a valid string looks like.?

-> “aaaaaaa………bbbbbbbbbbbb”
-> “bbbbbbbbbb……………aaaaaaaaaaaa.”
*/


/*#include <bits/stdc++.h>
using namespace std;

int min_conversion_cost(string s) {
    int n = s.size();
    
    vector<int> prefix_a(n + 5, 0), suffix_b(n + 5, 0);
    vector<int> prefix_b(n + 5, 0), suffix_a(n + 15, 0);

    // Compute prefix_a and prefix_b
    if (s[0] == 'b') {
        prefix_a[0] = 1;
    } else {
        prefix_b[0] = 1;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == 'a') {
            prefix_a[i] = prefix_a[i - 1];
        } else {
            prefix_a[i] = 1 + prefix_a[i - 1];
        }

        if (s[i] == 'b') {
            prefix_b[i] = prefix_b[i - 1];
        } else {
            prefix_b[i] = 1 + prefix_b[i - 1];
        }
    }

    // Compute suffix_b and suffix_a
    if (s[n - 1] == 'a') {
        suffix_b[n - 1] = 1;
    } else {
        suffix_a[n - 1] = 1;
    }

    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == 'a') {
            suffix_b[i] = 1 + suffix_b[i + 1];
        } else {
            suffix_b[i] = suffix_b[i + 1];
        }

        if (s[i] == 'b') {
            suffix_a[i] = 1 + suffix_a[i + 1];
        } else {
            suffix_a[i] = suffix_a[i + 1];
        }
    }

    // Compute minimum conversion cost
    int r = INT_MAX;
    for (int i = 0; i < n; i++) {
        int cost1 = prefix_a[i] + suffix_b[i + 1];
        int cost2 = prefix_b[i] + suffix_a[i + 1];
        r = min({r, cost1, cost2});
    }

    return r;
}

int main() {
    string s;
    cin >> s;
    cout << min_conversion_cost(s) << endl;
    return 0;
}
*/


//python


/*import sys

def min_conversion_cost(s):
    n = len(s)
    
    # Initialize prefix and suffix arrays
    prefix_a = [0] * (n + 5)
    suffix_b = [0] * (n + 5)
    prefix_b = [0] * (n + 5)
    suffix_a = [0] * (n + 15)

    # Compute prefix_a and prefix_b
    if s[0] == 'b':
        prefix_a[0] = 1
    else:
        prefix_b[0] = 1

    for i in range(1, n):
        if s[i] == 'a':
            prefix_a[i] = prefix_a[i - 1]
        else:
            prefix_a[i] = 1 + prefix_a[i - 1]

        if s[i] == 'b':
            prefix_b[i] = prefix_b[i - 1]
        else:
            prefix_b[i] = 1 + prefix_b[i - 1]

    # Compute suffix_b and suffix_a
    if s[n - 1] == 'a':
        suffix_b[n - 1] = 1
    else:
        suffix_a[n - 1] = 1

    for i in range(n - 2, -1, -1):
        if s[i] == 'a':
            suffix_b[i] = 1 + suffix_b[i + 1]
        else:
            suffix_b[i] = suffix_b[i + 1]

        if s[i] == 'b':
            suffix_a[i] = 1 + suffix_a[i + 1]
        else:
            suffix_a[i] = suffix_a[i + 1]

    # Compute minimum conversion cost
    r = sys.maxsize
    for i in range(n):
        cost1 = prefix_a[i] + suffix_b[i + 1]
        cost2 = prefix_b[i] + suffix_a[i + 1]
        r = min(r, cost1, cost2)

    return r

# Example usage:
s = input().strip()
print(min_conversion_cost(s))
*/