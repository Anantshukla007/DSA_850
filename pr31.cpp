/*You are given a string S[1..n) of rength n having only lowercase English letters
You are also given a queries, each having two space separated integers /andr
For each query, you need to print the nuricher of substrings of the string SL..r) which starts and end with the same character.
Notes:
SL.) is a substring of S having start index / and end index r
• A single character is also considered as a valid substring satisfying the above-given condition.
66
67
20
• Indexes starts from / Same substrings starting at different indexes are considered different
See Sample Case Explanation for more details*/


/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int q;
    cin >> q;

    vector<vector<int>> pre(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; i++) {
        int e = s[i] - 'a';
        for (int j = 0; j < 26; j++) {
            pre[i + 1][j] = (e == j) + pre[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int ans = 0;

        for (int j = 0; j < 26; j++) {
            int num = pre[r][j] - pre[l - 1][j];
            ans += num * (num + 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
*/


/*python*/


/*s = input()
n = len(s)
q = int(input())

# Create prefix array of size (n+1) x 26
pre = [[0]*26 for _ in range(n+1)]

# Build prefix frequency array (1-indexed)
for i in range(n):
    e = ord(s[i]) - ord('a')
    for j in range(26):
        pre[i+1][j] = (e == j) + pre[i][j]

for _ in range(q):
    l, r = map(int, input().split())
    ans = 0
    for j in range(26):
        num = pre[r][j] - pre[l-1][j]
        ans += num * (num + 1) // 2
    print(ans)
*/