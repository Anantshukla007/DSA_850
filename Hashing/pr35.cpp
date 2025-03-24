/*Understanding : We are given an array B of size “N”; Divide the array into 4 continuous parts such that g = part1 -part2 +part3 -part4 is maximized. 

Any part is allowed to be empty as well ; but collectively they should cover the whole array 

Example:-> 

G = p1 + p3 - (p2 + p4)
*/



/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> b(n);
    ll tot = 0;

    for (ll i = 0; i < n; i++) {
        cin >> b[i];
        tot += b[i];
    }

    vector<ll> p(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        p[i] = min(b[i], b[i] + (i > 0 ? p[i - 1] : 0));
    }

    vector<ll> s(n + 1, 0);
    ll sum = 0;
    for (ll i = n - 1; i >= 0; i--) {
        sum += b[i];
        s[i] = min(sum, s[i + 1]);
    }

    ll d = 1e18, t = 0;
    for (ll i = 0; i <= n; i++) {
        ll v = min(t, (i > 0 ? p[i - 1] : 0)) + min(s[i], t);
        d = min(d, v);
        if (i < n) t += b[i];
    }

    cout << tot - 2 * d << endl;
    return 0;
}
*/

/*python*/
/*def solve(arr):
    n = len(arr)
    tot = sum(arr)

    # Compute prefix min array
    p = [0] * (n + 1)
    for i in range(n):
        p[i] = min(arr[i], arr[i] + (p[i - 1] if i > 0 else 0))

    # Compute suffix min array
    s = [0] * (n + 1)
    sum_suffix = 0
    for i in range(n - 1, -1, -1):
        sum_suffix += arr[i]
        s[i] = min(sum_suffix, s[i + 1])

    # Find minimum possible d
    d = float('inf')
    t = 0
    for i in range(n + 1):
        v = min(t, p[i - 1] if i > 0 else 0) + min(s[i], t)
        d = min(d, v)
        if i < n:
            t += arr[i]

    return tot - 2 * d

# Input handling
n = int(input())
arr = list(map(int, input().split()))
print(solve(arr))
*/