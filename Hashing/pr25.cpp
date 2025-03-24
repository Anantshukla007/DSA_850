/* We are given an array  of size “N”. We have to pick “x” elements at exactly “y” distance; sum of all them should be minimum. 

-> [1 5 8 1 4 5 8] X = 2; Y =2;
(5+1=6.)
*/


/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll; 

int main() {
    
    ll n;
    cin >> n;
    vector<ll> a(n);  // Use vector instead of array
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll x, y;
    cin >> x >> y;

    vector<ll> pref(n, 0);

    for (ll i = 0; i < n; i++) {
        if (i - y >= 0) {
            pref[i] = a[i] + pref[i - y];
        } else {
            pref[i] = a[i];
        }
    }
    
    ll k = 1e18;  
    for (ll i = 0; i < n; i++) {
        ll index = i - (x - 1) * y;
        if (index >= 0) {
            ll g = pref[i];
            if (index - y >= 0) {
                g -= pref[index - y];  
            }
            k = min(g, k);
            cout << g << '\n';
        }
    }
    cout << k;
    
    return 0;  
}
*/

/*python*/


/*def solve(a, n, x, y):
    pref = [0] * n

    for i in range(n):
        if i - y >= 0:
            pref[i] = a[i] + pref[i - y]
        else:
            pref[i] = a[i]

    k = float('inf')
    
    for i in range(n):
        index = i - (x - 1) * y
        if index >= 0:
            g = pref[i]
            if index - y >= 0:
                g -= pref[index - y]
            k = min(g, k)
            print(g)
    
    print(k)

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    x, y = map(int, input().split())

    solve(a, n, x, y)
*/