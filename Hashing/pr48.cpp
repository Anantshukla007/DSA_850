/*Rahul has a path of stones, and each stone has a character written on both sides of ila and 'b'.
main.cpp
Each second he can perform this operation on the stones
Select a stone, and flip it, i.e. if the top part was having 'a' it will become 'b' now.

A Path is called good if it does not contain "aba" or "bab" as a subsequence-for instance, "abba" contains "aba" as a subsequence, hence it is not a good path, while "abbb" doesn't contain neither "aba" nor "bab" as spbsequences, so it is a good path.
0
What is the minimum number of seconds he will require so that the path becomes good?
It can be shown that with these operations we can make any path good.

A string a is a subsequence of a string b if a can be obtained from li by deletion of several (possibly, zero or all) characters.
You have to answer t independent test cases.
[execution time limit] 0.5 seconds (cpp)*/



/*#include <bits/stdc++.h>
using namespace std;

int minOperations(string s) {
    int n = s.size();
    vector<int> prefix_a(n + 1, 0), prefix_b(n + 1, 0);
    vector<int> suffix_a(n + 2, 0), suffix_b(n + 2, 0);

    // Build prefix arrays
    prefix_a[0] = (s[0] == 'b') ? 1 : 0;
    prefix_b[0] = (s[0] == 'a') ? 1 : 0;

    for (int i = 1; i < n; i++) {
        prefix_a[i] = prefix_a[i - 1] + (s[i] == 'b' ? 1 : 0);
        prefix_b[i] = prefix_b[i - 1] + (s[i] == 'a' ? 1 : 0);
    }

    // Build suffix arrays
    suffix_a[n - 1] = (s[n - 1] == 'b') ? 1 : 0;
    suffix_b[n - 1] = (s[n - 1] == 'a') ? 1 : 0;

    for (int i = n - 2; i >= 0; i--) {
        suffix_a[i] = suffix_a[i + 1] + (s[i] == 'b' ? 1 : 0);
        suffix_b[i] = suffix_b[i + 1] + (s[i] == 'a' ? 1 : 0);
    }

    int res = INT_MAX;

    // Try every possible split point
    for (int i = 0; i < n; i++) {
        int cost1 = prefix_a[i] + suffix_b[i + 1];  // "aaaa...bbbb"
        int cost2 = prefix_b[i] + suffix_a[i + 1];  // "bbbb...aaaa"
        res = min({res, cost1, cost2});
    }

    return res;
}

int main() {
    string s;
    cin >> s;
    cout << minOperations(s) << endl;
    return 0;
}
*/


///python////


/*def min_operations(s: str) -> int:
    n = len(s)
    prefix_a = [0] * (n + 1)
    prefix_b = [0] * (n + 1)
    suffix_a = [0] * (n + 2)
    suffix_b = [0] * (n + 2)

    # Prefix cost
    prefix_a[0] = 1 if s[0] == 'b' else 0
    prefix_b[0] = 1 if s[0] == 'a' else 0

    for i in range(1, n):
        prefix_a[i] = prefix_a[i - 1] + (1 if s[i] == 'b' else 0)
        prefix_b[i] = prefix_b[i - 1] + (1 if s[i] == 'a' else 0)

    # Suffix cost
    suffix_a[n - 1] = 1 if s[n - 1] == 'b' else 0
    suffix_b[n - 1] = 1 if s[n - 1] == 'a' else 0

    for i in range(n - 2, -1, -1):
        suffix_a[i] = suffix_a[i + 1] + (1 if s[i] == 'b' else 0)
        suffix_b[i] = suffix_b[i + 1] + (1 if s[i] == 'a' else 0)

    res = float('inf')

    for i in range(n):
        cost1 = prefix_a[i] + suffix_b[i + 1]  # "aaaa...bbbb"
        cost2 = prefix_b[i] + suffix_a[i + 1]  # "bbbb...aaaa"
        res = min(res, cost1, cost2)

    return res

# Example
s = input().strip()
print(min_operations(s))
*/